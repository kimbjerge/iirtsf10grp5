#include <QtGui/QApplication>
#include "mainwindow.h"
#include "graph.h"

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    //MainWindow w;
    std::cout << "Sapien 190 started" << "endl";

    Graph w;
    w.show();
    w.on_simulate_clicked();
    return a.exec();
}
