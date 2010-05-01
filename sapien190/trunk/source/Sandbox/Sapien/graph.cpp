#include "graph.h"
#include "ui_graph.h"
#include "rpy/NormalGenerator.h"
#include "rpy/Medicine.h"
#include "rpy/RecordProxy.h"
#include "rpy/RecordWfdb.h"
#include "rpy/RecordSimulate.h"
#include "rpy/SmartPtr.h"

Graph::Graph(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Graph),
    itsPatientModel(0)
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

void Graph::on_simulate_clicked()
{
    //SmartPtr<PatientModel> model(new PatientModel);

    if (itsPatientModel == 0)
    {
        // Create the PatientModel and configurate
        itsPatientModel = new PatientModel();
        itsPatientModel->SetStrategy(new NormalGenerator());
        itsPatientModel->AddMedicine(new Medicine());
        //itsPatientModel->SetRecord(new RecordProxy(new RecordSimulate()));
        itsPatientModel->SetRecord(new RecordProxy(new RecordWfdb("100s")));
    }
    itsPatientModel->StartSimulation();
    for (int i = 0; i < 1000; i++)
    {
        int sample;
        itsPatientModel->CalcSample();
        itsPatientModel->GenerateSignals();
        Generator *gen = itsPatientModel->getItsGenerator();
        sample = gen->getECGSample();
        this->addValue(sample-1050);
        //this->addValue(sample-600);
        usleep(4000);
    }
}
