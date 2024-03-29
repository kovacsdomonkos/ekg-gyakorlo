#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_uj_regisztratum_clicked();

    void on_action_kat00_toggled(bool arg1);

    void on_action_kat01_triggered(bool checked);


private:
    Ui::MainWindow *ui;
};




#endif // MAINWINDOW_H
