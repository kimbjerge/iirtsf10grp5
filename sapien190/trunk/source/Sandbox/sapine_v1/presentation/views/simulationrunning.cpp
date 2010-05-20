#include "simulationrunning.h"
#include "ui_simulationrunning.h"

#include "presentation/SimState/startcommand.h"
#include "presentation/SimState/stopcommand.h"
#include "presentation/SimState/pausecommand.h"
#include "presentation/SimState/resumecommand.h"

SimulationRunning::SimulationRunning(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SimulationRunning)
{
    ui->setupUi(this);

    top = new Graph(this);
    top->move(0,0);
    top->show();

    connect(this,SIGNAL(frameBufferUpdated()),top,SLOT(frameBufferUpdated()), Qt::QueuedConnection);
}

SimulationRunning::~SimulationRunning()
{
    delete ui;
}

void SimulationRunning::changeEvent(QEvent *e)
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

Graph* SimulationRunning::getTopGraph(){
    return top;
}

Graph* SimulationRunning::getBottomGraph(){
    return bottom;
}

void SimulationRunning::Update(FrameBuffer *fp){

    int sample;
    fp->First();
    while (!fp->IsDone())
    {
       sample = fp->GetSample();
        top->addValue(sample);

        fp->Next();

    }
        emit frameBufferUpdated();

}

void SimulationRunning::on_startButton_clicked()
{
    emit ButtonPushed(new StartCommand());
}

void SimulationRunning::on_pauseButton_clicked()
{
    emit ButtonPushed(new PauseCommand());
}

void SimulationRunning::on_resumeButton_clicked()
{
    emit ButtonPushed(new ResumeCommand());
}

void SimulationRunning::on_stopButton_clicked()
{
    emit ButtonPushed(new StopCommand());
}

void SimulationRunning::on_gain_changed(double gain)
{
    gainParam.setGain((float)gain);
    emit ParameterChanged(&gainParam);
}

void SimulationRunning::on_rate_changed(int rate)
{
    rateParam.setRate(rate);
    emit ParameterChanged(&rateParam);
}
