#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void changeEvent(QEvent *e);

private slots:
    void start(void);
    void stop(void);
    void infusionPump(bool t);

private:
    Ui::MainWindow *ui;
    bool running;
    bool morph;
};

#endif // MAINWINDOW_H
