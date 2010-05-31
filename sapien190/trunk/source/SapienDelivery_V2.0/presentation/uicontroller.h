#ifndef UICONTROLLER_H
#define UICONTROLLER_H

#include <QObject>
#include "sapienmainwindow.h"
#include "rpy/SimulatorRealtime.h"
#include "presentation/views/simulationrunning.h"
#include "Observer.h"
#include "NormalModel.h"
#include "Medicine.h"
#include "RecordWfdb.h"
#include "SimulatorRealtime.h"
#include "Record.h"
#include "SimState/simcommand.h"
#include "rpy/Parameter.h"

class UIController : public QObject
{
Q_OBJECT
public:
    explicit UIController(QObject *parent = 0);

    SimulatorRealtime* GetSimulatorRealtime();
    void ChangeState(SimState*);
    void start();

private:
    SimulationRunning sim;
    SimState *simState;
    SimulatorRealtime *itsSimulatorRealtime;

public slots:
    void SimulatorButtonPushed(SimCommand*);
    void SimulatorParameterChanged(Parameter*);

signals:

};

#endif // UICONTROLLER_H
