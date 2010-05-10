#include "graph.h"
#include "ui_graph.h"

#include "NormalModel.h"
#include "Medicine.h"
#include "RecordProxy.h"
#include "RecordWfdb.h"
#include "RecordSimulate.h"
#include "SmartPtr.h"
#include "SimulatorRealtime.h"
#include "FrameBuffer.h"
#include "DistributerThread.h"
#include "RealTimeThread.h"

Graph::Graph(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Graph),
    running(false),
    sampleRate(1),
    itsPatientModel(0),
    itsSimulatorRealtime(0)
{
    this->resolution = 200;
    this->maxValue = 200;

    strcpy(this->recordName, "100s");

    ui->setupUi(this);
}

Graph::~Graph()
{
    delete ui;
    delete pRecord1;
    delete pRecord2;
    delete itsSimulatorRealtime;
    //wfdbquit();
}

void Graph::paintEvent(QPaintEvent *){

    QPainter painter(this);
    //int width = 100;
    int resValue = this->width() / this->resolution;
    int offset = this->height() / 2;

    double corValue = (double) this->height() /  (2 * (double)maxValue);

    int accourence = this->values.size();
    if(accourence > this->resolution) accourence = this->resolution;

    for(int i = 0;i < accourence; i++){

        int startX = 0;
        int startY = offset;
        if(i != 0) {
            startX = i * resValue;
            startY = offset + this->values[this->values.size() - accourence + i - 1] * corValue * -1;
        }

        painter.drawLine(startX,startY,resValue * (i + 1),offset + this->values[this->values.size() - accourence + i] * corValue * -1);
    }

}

void Graph::setResolution(int value){
    this->resolution = value;
}

void Graph::addValue(int value){
    this->values.push_back(value);
    if(this->values.size() > this->resolution) this->values.erase(this->values.begin());
    this->repaint(0,0,this->width(),this->height());
}

void Graph::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void Graph::Update(FrameBuffer* fp) {
    int sample;
    cout << "FrameBuffer Updated:" << endl;
    fp->First();
    while (!fp->IsDone())
    {
       sample = fp->GetSample();
       //this->addValue(sample+250); // Unsafe due to called by other task than UI
       cout << sample << ", ";
       fp->Next();
    }
    sample = fp->GetSample();
    cout <<  sample << endl;
}

// Threaded version with framebuffer and observer pattern
void Graph::on_simulate_clicked()
{

    if (itsSimulatorRealtime == 0)
    {
        // Create the SimulatorRelatime system and configurate with normal model
        itsSimulatorRealtime = new SimulatorRealtime(25); // Size of frame buffer
        itsSimulatorRealtime->AttachObserver(this); // Observe on frame buffer
        itsSimulatorRealtime->SetSampleRate(sampleRate); // Sample rate default 1 hz (250 hz - Records)
        itsSimulatorRealtime->CreatePatientModel(SimulatorRealtime::Normal); // Create patient model
        pRecord1 = itsSimulatorRealtime->CreateWfdbRecord("e0104"); offset1 = -250; // Create record for simulation
        pRecord2 = itsSimulatorRealtime->CreateWfdbRecord("e0103"); offset2 = 200;
        //pRecord2 = itsSimulatorRealtime->CreateSimRecord(); offset2 = 500;
    }

    if (!running)
    {
        pRecord = pRecord1;
        offset = offset1;
        itsSimulatorRealtime->AssignRecord(pRecord); // Assign a record for simulation
        itsSimulatorRealtime->SetMedicine(SimulatorRealtime::Morphine); // Create and set medicine
        itsSimulatorRealtime->StartSimulation(); // Start simulation
        running = true;
    }
}

void Graph::on_stop_simulate_clicked()
{
    if (running)
    {
        itsSimulatorRealtime->StopSimulation(); // Stop simulation
        running = false;
    }
}

void Graph::on_alterRecord_clicked()
{
    if (running)
    {
        if (pRecord == pRecord1)
        {
            pRecord = pRecord2;
            offset = offset2;
        }
        else
        {
            pRecord = pRecord1;
            offset = offset1;
        }
        itsSimulatorRealtime->AlternateRecord(pRecord);
    }
}

void Graph::on_sampleRate_changed(int rate)
{
   sampleRate = rate;
   if (itsSimulatorRealtime != 0)
   {
       itsSimulatorRealtime->SetSampleRate(sampleRate); // Sample rate
   }
}

void Graph::on_testModel_clicked()
{
    //SmartPtr<PatientModel> model(new PatientModel);

    if (itsPatientModel == 0)
    {
        // Create the PatientModel and configurate
        itsPatientModel = new PatientModel();
        itsPatientModel->SetStrategy(new NormalModel());
        itsPatientModel->SetMedicine(new Medicine(SimulatorRealtime::Morphine));
        //itsPatientModel->SetRecord(new RecordProxy(new RecordSimulate())); offset = 500;
        //itsPatientModel->SetRecord(new RecordProxy(new RecordWfdb("100s"))); offset = 1050;
        //itsPatientModel->SetRecord(new RecordProxy(new RecordWfdb("e0103"))); offset = 200;
        itsPatientModel->SetRecord(new RecordProxy(new RecordWfdb("e0104"))); offset = -250;
    }
    itsPatientModel->StartSimulation();
    for (int i = 0; i < 500; i++)
    {
        int sample;
        itsPatientModel->CalcSample();
        sample = itsPatientModel->GetECGValue(0);
        //sample = itsPatientModel->GetEDRValue(0);
        this->addValue(sample-offset);
        usleep(3000);
    }
}

void Graph::on_refresh_clicked()
{
    int maxCount = 0;

    if (isigopen(recordName, s, 2) < 2)
    {
        cout << "Error open record " << recordName << endl;
    }
    else
    {
        while  (getvec(this->v) > 0) {
                this->addValue(this->v[1] - 1050);
                usleep(4000);
                if (maxCount++ > 500) break;
            }
    }
}


