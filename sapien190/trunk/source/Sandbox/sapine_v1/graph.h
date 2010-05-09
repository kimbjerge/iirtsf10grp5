
#ifndef GRAPH_H
#define GRAPH_H

#include <QWidget>
#include <QPainter>
#include <vector>
#include <cstdlib>
#include <wfdb/wfdb.h>
#include <iostream>
#include <stdio.h>
#include "PatientModel.h"
#include "SimulatorRealtime.h"
#include "Observer.h"
#include "Record.h"

using namespace std;

namespace Ui {
    class Graph;
}

class Graph : public QWidget, public Observer {
    Q_OBJECT
public:
    Graph(QWidget *parent = 0);
    void addValue(int);
    void setResolution(int);
    void Update(FrameBuffer* fp);
    ~Graph();

protected:
    void changeEvent(QEvent *e);
    void paintEvent(QPaintEvent *);

private:
    Ui::Graph *ui;
    vector<int> values;
    int resolution;
    int maxValue;
    char recordName[100];
    WFDB_Sample v[2];
    WFDB_Siginfo s[2];
    bool running;
    int sampleRate;

    PatientModel *itsPatientModel;
    SimulatorRealtime *itsSimulatorRealtime;

    Record *pRecord;
    Record *pRecord1;
    Record *pRecord2;
    int offset;
    int offset1;
    int offset2;


public slots:
    void on_refresh_clicked();
    void on_simulate_clicked();
    void on_stop_simulate_clicked();
    void on_testModel_clicked();
    void on_alterRecord_clicked();
    void on_sampleRate_changed(int rate);
};

#endif // GRAPH_H
