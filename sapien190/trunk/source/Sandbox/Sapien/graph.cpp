#include "graph.h"
#include "ui_graph.h"

Graph::Graph(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Graph)
{
    this->resolution = 200;
    this->maxValue = 200;

        strcpy(this->record, "100s");

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
    int resValue = this->width() / this->resolution;
    int offset = this->height() / 2;

    double corValue = (double) this->height() /  (2 * (double)maxValue);

    int accourence = this->values.size();
    if(accourence > this->resolution) accourence = this->resolution;

    for(int i = 0;i < accourence; i++){

        int startX = 0;
        int startY = offset;
        if(i != 0) {
            startX = i * resValue;
            startY = offset + this->values[this->values.size() - accourence + i - 1] * corValue * -1;
        }

        painter.drawLine(startX,startY,resValue * (i + 1),offset + this->values[this->values.size() - accourence + i] * corValue * -1);
    }

}

void Graph::setResolution(int value){
    this->resolution = value;
}

void Graph::addValue(int value){
    this->values.push_back(value);
    if(this->values.size() > this->resolution) this->values.erase(this->values.begin());
    this->repaint(0,0,this->width(),this->height());
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

void Graph::on_refresh_clicked()
{

    if (isigopen(this->record, s, 2) < 2)
    {

    }
    else
    {
        while  (getvec(this->v) > 0) {
                this->addValue(this->v[1] - 1050);
                usleep(4000);
            }
    }
}
