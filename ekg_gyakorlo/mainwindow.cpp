#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QPixmap>
#include <vector>

std::vector<std::vector<int>> g_kivalasztott_reg(10);


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_action_kat01_toggled(bool kat01)
{
    if(kat01)
    {
        for(int i = 1; i <= 15; i++){
            ::g_kivalasztott_reg[0].push_back(i);
        }
    }
    else
    {
        ::g_kivalasztott_reg[0].clear();
    }
}


void MainWindow::on_uj_regisztratum_clicked()
{
    qDebug() << ::g_kivalasztott_reg[0].size();
}
