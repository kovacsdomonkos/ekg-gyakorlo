#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QPixmap>
#include <vector>
#include <QCheckBox>
#include <QWidgetAction>

std::vector<std::vector<int>> g_kivalasztott_reg(10);

void reg_init()
{
    for(int i = 1; i < 16; i++){
        ::g_kivalasztott_reg[0].push_back(i);
    }
    for (int i = 16; i < 40 ; i++) {
        ::g_kivalasztott_reg[1].push_back(i);
    }
}


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    reg_init(); //inicializálja a regisztratumokat tartalmazo vektort


}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_action_kat00_toggled(bool checked)
{
    if(checked)
    {
        for(int i = 1; i < 16; i++){
            ::g_kivalasztott_reg[0].push_back(i);
        }
    }
    else
    {
        ::g_kivalasztott_reg[0].clear();
    }
}

void MainWindow::on_action_kat01_triggered(bool checked)
{
    if(checked)
    {
        for (int i = 16; i < 40 ; i++) {
            ::g_kivalasztott_reg[1].push_back(i);
        }
    }
    else
    {
        ::g_kivalasztott_reg[1].clear();
    }
}

void MainWindow::on_uj_regisztratum_clicked()
{
    qDebug() << ::g_kivalasztott_reg[0].size() << ::g_kivalasztott_reg[1].size();
}



