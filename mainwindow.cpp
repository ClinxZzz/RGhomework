#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_B1_clicked()
{
    TEXT+="1";
    ui->lineEdit->setText(TEXT);
}

void MainWindow::on_B2_clicked()
{
    TEXT+="2";
    ui->lineEdit->setText(TEXT);
}

void MainWindow::on_B3_clicked()
{
    TEXT+="3";
    ui->lineEdit->setText(TEXT);
}
void MainWindow::on_B4_clicked()
{
    TEXT+="4";
    ui->lineEdit->setText(TEXT);
}
void MainWindow::on_B5_clicked()
{
    TEXT+="5";
    ui->lineEdit->setText(TEXT);
}
void MainWindow::on_B6_clicked()
{
    TEXT+="6";
    ui->lineEdit->setText(TEXT);
}
void MainWindow::on_B7_clicked()
{
    TEXT+="7";
    ui->lineEdit->setText(TEXT);
}
void MainWindow::on_B8_clicked()
{
    TEXT+="8";
    ui->lineEdit->setText(TEXT);
}
void MainWindow::on_B9_clicked()
{
    TEXT+="9";
    ui->lineEdit->setText(TEXT);
}
void MainWindow::on_B0_clicked()
{
    TEXT+="0";
    ui->lineEdit->setText(TEXT);
}


void MainWindow::on_ADD_clicked()
{
    TEXT+="+";
    ui->lineEdit->setText(TEXT);
}
void MainWindow::on_SUB_clicked()
{
    TEXT+="-";
    ui->lineEdit->setText(TEXT);
}
void MainWindow::on_MUL_clicked()
{
    TEXT+="*";
    ui->lineEdit->setText(TEXT);
}
void MainWindow::on_AC_clicked()
{
    TEXT.clear();
    ui->lineEdit->clear();
}
void MainWindow::on_RESULT_clicked()
{

}
void MainWindow::on_DIV_clicked()
{
    TEXT+="/";
    ui->lineEdit->setText(TEXT);
}
