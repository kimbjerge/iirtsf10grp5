#include "graph.h"
#include "ui_graph.h"

Graph::Graph(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Graph)
{
    this->resolution = 200;
    this->maxValue = -100000;
    this->minValue = 100000;

    this->refreshRate = 50;
    this->refreshCounter;

    this->setStyleSheet("QWidget {background-color: white;}");

    ui->setupUi(this);

}

Graph::~Graph()
{
    delete ui;
    //wfdbquit();
}

void Graph::paintEvent(QPaintEvent *){

    QPainter painter(this);
    //int width = 100;
    double resValue = (double) this->width() / (double) this->resolution;
    int span = maxValue - minValue;

    double corValue = (double) this->height() /  ( 2 * (double)span);

    int offset = this->height()  / 2;

    int accourence = this->values.size();

    if(accourence > this->resolution) accourence = this->resolution;

    for(int i = 0;i < accourence; i++){

        int startX = 0;
        int startY = offset;
        if(i != 0) {
            startX = i * resValue;
            startY = this->values[this->values.size() - accourence + i - 1] * corValue * -1 + offset;
        }

        int toX = resValue * (i + 1);
        int toY = offset + this->values[this->values.size() - accourence + i] * corValue * -1;

        painter.drawLine(startX,startY,toX,toY);
    }

}

void Graph::setRefreshRate(int rate){
    this->refreshRate = rate;
}

void Graph::setResolution(int value){
    this->resolution = value;
}

void Graph::addValue(int value){
    if(this->minValue > value) this->minValue = value;
    if(this->maxValue < value) this->maxValue = value;

    if(this->values.size() > this->resolution) this->values.erase(this->values.begin());
    this->values.push_back(value);
    this->refreshCounter++;
    //this->repaint(0,0,this->width(),this->height());
}


void Graph::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void Graph::clearGraph()
{
    this->maxValue = -100000;
    this->minValue = 100000;
    this->values.clear();
    this->repaint(0,0,this->width(),this->height());
}

void Graph::frameBufferUpdated()
{

    this->repaint(0,0,this->width(),this->height());
      //  this->refreshCounter = 0;
  //  }
}


