#include <QtGui/QApplication>
#include "mainwindow.h"
#include "graph.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    Graph g;
    g.show();
    return a.exec();
}
