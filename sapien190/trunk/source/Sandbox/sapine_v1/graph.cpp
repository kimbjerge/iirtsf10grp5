#include "graph.h"
#include "ui_graph.h"

#include "NormalModel.h"
#include "Medicine.h"
#include "RecordProxy.h"
#include "RecordWfdb.h"
#include "RecordSimulate.h"
#include "SmartPtr.h"
#include "SimulatorRealtime.h"
#include "Record.h"
#include "FrameBuffer.h"
#include "DistributerThread.h"
#include "RealTimeThread.h"

Graph::Graph(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Graph),
    itsPatientModel(0),
    itsSimulatorRealtime(0)
{
    this->resolution = 200;
    this->maxValue = 200;

        strcpy(this->record, "100s");

    ui->setupUi(this);
}

Graph::~Graph()
{
    delete ui;
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

void Graph::on_refresh_clicked()
{

    if (isigopen(this->record, s, 2) < 2)
    {

    }
    else
    {
        while  (getvec(this->v) > 0) {
                this->addValue(this->v[1] - 1050);
                usleep(4000);
            }
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

/*
// Threaded version with framebuffer and observer pattern
void Graph::on_simulate_clicked()
{
    Record * record;

    if (itsSimulatorRealtime == 0)
    {
        // Create the SimulatorRelatim system and configurate
        itsSimulatorRealtime = new SimulatorRealtime(5);
        itsSimulatorRealtime->AttachObserver(this);
        itsSimulatorRealtime->CreatePatientModel(SimulatorRealtime::Normal);
        record = itsSimulatorRealtime->CreateWfdbRecord("e0104");
        //record = itsSimulatorRealtime->CreateSimRecord();
        itsSimulatorRealtime->AssignRecord(record);
        itsSimulatorRealtime->SetMedicine(SimulatorRealtime::Morphine);
        itsSimulatorRealtime->StartSimulation();
    }
}
*/

void Graph::on_simulate_clicked()
{
    //SmartPtr<PatientModel> model(new PatientModel);
    static int offset;

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
    for (int i = 0; i < 2000; i++)
    {
        int sample;
        itsPatientModel->CalcSample();
        sample = itsPatientModel->GetECGValue(0);
        //sample = itsPatientModel->GetEDRValue(0);
        this->addValue(sample-offset);
        usleep(4000);
    }
}


