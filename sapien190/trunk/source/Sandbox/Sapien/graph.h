
#ifndef GRAPH_H
#define GRAPH_H

#include <QWidget>
#include <QPainter>
#include <vector>
#include <cstdlib>
#include <wfdb/wfdb.h>
#include <iostream>
#include <stdio.h>

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
    char record[100];
    WFDB_Sample v[2];
    WFDB_Siginfo s[2];


private slots:
    void on_refresh_clicked();
};

#endif // GRAPH_H
