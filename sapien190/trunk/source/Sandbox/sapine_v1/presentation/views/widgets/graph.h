
#ifndef GRAPH_H
#define GRAPH_H

#include <QWidget>
#include <QPainter>
#include <vector>
#include <cstdlib>
#include "FrameBuffer.h"

using namespace std;

namespace Ui {
    class Graph;
}

class Graph : public QWidget {
    Q_OBJECT
public:
    Graph(QWidget *parent = 0);
    void addValue(int);
    void setResolution(int);
    void setRefreshRate(int);
    void clearGraph();
    ~Graph();

protected:
    void changeEvent(QEvent *e);
    void paintEvent(QPaintEvent *);

public slots:
    void frameBufferUpdated();

private:
    Ui::Graph *ui;
    vector<int> values;
    int resolution;
    int maxValue;
    int minValue;
    int refreshRate;
    int refreshCounter;
};

#endif // GRAPH_H
