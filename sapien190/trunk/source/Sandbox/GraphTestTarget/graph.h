#ifndef GRAPH_H
#define GRAPH_H

#include <QWidget>
#include <QPainter>
#include <vector>
#include <cstdlib>

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
    ~Graph();

protected:
    void changeEvent(QEvent *e);
    void paintEvent(QPaintEvent *);

private:
    Ui::Graph *ui;
    vector<int> values;
    int resolution;
    int maxValue;

private slots:
    void on_refresh_clicked();
};

#endif // GRAPH_H
