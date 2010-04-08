/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon Apr 5 11:30:00 2010
**      by: Qt User Interface Compiler version 4.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGraphicsView>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tabSetup;
    QComboBox *comboBoxScenario;
    QLabel *labelScenario;
    QPushButton *pushButtonStart;
    QPushButton *pushButtonStart_2;
    QWidget *tabSimulate;
    QCheckBox *checkBox;
    QLineEdit *lineEditMedicine;
    QLabel *labelMedicine;
    QLineEdit *lineEdit;
    QLabel *label;
    QWidget *tabAdjust;
    QGraphicsView *graphicsViewWave;
    QSlider *horizontalSliderRate;
    QSpinBox *spinBox;
    QFrame *line;
    QLabel *label_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(601, 408);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 581, 331));
        tabSetup = new QWidget();
        tabSetup->setObjectName(QString::fromUtf8("tabSetup"));
        comboBoxScenario = new QComboBox(tabSetup);
        comboBoxScenario->setObjectName(QString::fromUtf8("comboBoxScenario"));
        comboBoxScenario->setGeometry(QRect(110, 90, 431, 22));
        labelScenario = new QLabel(tabSetup);
        labelScenario->setObjectName(QString::fromUtf8("labelScenario"));
        labelScenario->setGeometry(QRect(30, 90, 61, 16));
        pushButtonStart = new QPushButton(tabSetup);
        pushButtonStart->setObjectName(QString::fromUtf8("pushButtonStart"));
        pushButtonStart->setGeometry(QRect(280, 190, 111, 41));
        pushButtonStart_2 = new QPushButton(tabSetup);
        pushButtonStart_2->setObjectName(QString::fromUtf8("pushButtonStart_2"));
        pushButtonStart_2->setGeometry(QRect(430, 190, 111, 41));
        tabWidget->addTab(tabSetup, QString());
        tabSimulate = new QWidget();
        tabSimulate->setObjectName(QString::fromUtf8("tabSimulate"));
        checkBox = new QCheckBox(tabSimulate);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(60, 80, 151, 18));
        lineEditMedicine = new QLineEdit(tabSimulate);
        lineEditMedicine->setObjectName(QString::fromUtf8("lineEditMedicine"));
        lineEditMedicine->setGeometry(QRect(150, 130, 251, 27));
        lineEditMedicine->setReadOnly(true);
        labelMedicine = new QLabel(tabSimulate);
        labelMedicine->setObjectName(QString::fromUtf8("labelMedicine"));
        labelMedicine->setGeometry(QRect(70, 140, 62, 17));
        lineEdit = new QLineEdit(tabSimulate);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(150, 190, 251, 27));
        label = new QLabel(tabSimulate);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 200, 62, 17));
        tabWidget->addTab(tabSimulate, QString());
        tabAdjust = new QWidget();
        tabAdjust->setObjectName(QString::fromUtf8("tabAdjust"));
        graphicsViewWave = new QGraphicsView(tabAdjust);
        graphicsViewWave->setObjectName(QString::fromUtf8("graphicsViewWave"));
        graphicsViewWave->setGeometry(QRect(20, 10, 541, 181));
        horizontalSliderRate = new QSlider(tabAdjust);
        horizontalSliderRate->setObjectName(QString::fromUtf8("horizontalSliderRate"));
        horizontalSliderRate->setGeometry(QRect(200, 210, 361, 20));
        horizontalSliderRate->setOrientation(Qt::Horizontal);
        spinBox = new QSpinBox(tabAdjust);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(130, 210, 46, 22));
        line = new QFrame(tabAdjust);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(20, 230, 541, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(tabAdjust);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 210, 81, 17));
        tabWidget->addTab(tabAdjust, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 601, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(pushButtonStart, SIGNAL(clicked()), MainWindow, SLOT(start()));
        QObject::connect(pushButtonStart_2, SIGNAL(clicked()), MainWindow, SLOT(stop()));
        QObject::connect(checkBox, SIGNAL(toggled(bool)), MainWindow, SLOT(infusionPump(bool)));
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), horizontalSliderRate, SLOT(setValue(int)));
        QObject::connect(horizontalSliderRate, SIGNAL(valueChanged(int)), spinBox, SLOT(setValue(int)));

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        labelScenario->setText(QApplication::translate("MainWindow", "Scenario", 0, QApplication::UnicodeUTF8));
        pushButtonStart->setText(QApplication::translate("MainWindow", "Start", 0, QApplication::UnicodeUTF8));
        pushButtonStart_2->setText(QApplication::translate("MainWindow", "Stop", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabSetup), QApplication::translate("MainWindow", "Setup", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("MainWindow", "Infusion Pump ", 0, QApplication::UnicodeUTF8));
        labelMedicine->setText(QApplication::translate("MainWindow", "Medicine", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Volume", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabSimulate), QApplication::translate("MainWindow", "Simulate", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "ECG Rate", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabAdjust), QApplication::translate("MainWindow", "Adjust", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
