#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    running(false),
    morph(false)
{
    QIcon icon("qtcreator_logo_16.png");
    QString t1 = "ECG scenario 1";
    QString t2 = "ECG scenario 2";
    QString t3 = "ECG scenario 3";
    QString t4 = "ECG scenario 4";
    QString t5 = "ECG scenario 5";
    QVariant data;

    ui->setupUi(this);
    ui->comboBoxScenario->addItem(icon, t1, data);
    ui->comboBoxScenario->addItem(icon, t2, data);
    ui->comboBoxScenario->addItem(icon, t3, data);
    ui->comboBoxScenario->addItem(icon, t4, data);
    ui->comboBoxScenario->addItem(icon, t5, data);
    ui->pushButtonStart->setIcon(icon);
    ui->graphicsViewWave->setWindowIcon(icon);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
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

void MainWindow::infusionPump(bool t)
{
    morph = t;

    if (morph)
        ui->lineEditMedicine->setText("Morhphine");
    else
        ui->lineEditMedicine->setText("None");

}

void MainWindow::start(void)
{
    running = true;
}

void MainWindow::stop(void)
{
    running = false;
}
