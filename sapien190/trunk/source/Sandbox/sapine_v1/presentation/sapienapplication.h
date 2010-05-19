#include <QtGui/QApplication>
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

#ifndef SAPIENAPPLICATION_H
#define SAPIENAPPLICATION_H

class SimState;
class SimCommand;

class SapienApplication : public QApplication
{
public:
    SapienApplication(int argc, char *argv[]);
};

#endif // SAPIENAPPLICATION_H
