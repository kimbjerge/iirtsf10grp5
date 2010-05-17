#ifndef SIMULATIONRUNNING_H
#define SIMULATIONRUNNING_H

#include <QWidget>
#include "widgets/graph.h"
#include "rpy/Observer.h"
#include "rpy/FrameBuffer.h"
#include "presentation/SimState/simcommand.h"

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

private slots:
    void on_stopButton_clicked();
    void on_resumeButton_clicked();
    void on_pauseButton_clicked();
    void on_startButton_clicked();

signals:
    void ButtonPushed(SimCommand*);
    void frameBufferUpdated();

};

#endif // SIMULATIONRUNNING_H
