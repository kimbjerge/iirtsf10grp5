#include "sapienapplication.h"
#include "presentation/uicontroller.h"

SapienApplication::SapienApplication(int argc, char *argv[]) : QApplication(argc,argv)
{
    UIController* controller = new UIController(this);

    controller->start();

}
