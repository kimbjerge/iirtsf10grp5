#include "sapienmainwindow.h"
#include "ui_sapienmainwindow.h"

SapienMainWindow::SapienMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SapienMainWindow)
{
    ui->setupUi(this);
}

SapienMainWindow::~SapienMainWindow()
{
    delete ui;
}

void SapienMainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
