#ifndef SIMULATIONRUNNING_H
#define SIMULATIONRUNNING_H

#include <QWidget>
#include "widgets/graph.h"
#include "rpy/Observer.h"
#include "rpy/FrameBuffer.h"
#include "presentation/SimState/simcommand.h"
#include "rpy/parameter.h"
#include "rpy/GainParam.h"
#include "rpy/RateParam.h"

namespace Ui {
    class SimulationRunning;
}

class SimulationRunning : public QWidget, public Observer {
    Q_OBJECT
public:
    SimulationRunning(QWidget *parent = 0);
    ~SimulationRunning();
    Graph* getTopGraph();
    Graph* getBottomGraph();
    void Update(FrameBuffer *fp);

protected:
    void changeEvent(QEvent *e);

private:
    Ui::SimulationRunning *ui;
    Graph *top;
    Graph *bottom;
    GainParam gainParam;
    RateParam rateParam;


private slots:
    void on_stopButton_clicked();
    void on_resumeButton_clicked();
    void on_pauseButton_clicked();
    void on_startButton_clicked();
    void on_gain_changed(double);
    void on_rate_changed(int);

signals:
    void ButtonPushed(SimCommand*);
    void frameBufferUpdated();
    void ParameterChanged(Parameter*);

};

#endif // SIMULATIONRUNNING_H
