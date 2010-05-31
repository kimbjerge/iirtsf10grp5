#ifndef SAPIENMAINWINDOW_H
#define SAPIENMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class SapienMainWindow;
}

class SapienMainWindow : public QMainWindow {
    Q_OBJECT
public:
    SapienMainWindow(QWidget *parent = 0);
    ~SapienMainWindow();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::SapienMainWindow *ui;
};

#endif // SAPIENMAINWINDOW_H
