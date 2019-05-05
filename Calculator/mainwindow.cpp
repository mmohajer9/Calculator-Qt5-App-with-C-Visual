#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QString>

int FirstNum = 0;
int SecNum = 0;
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

void MainWindow::on_one_clicked()
{
        QString str = ui->lineEdit->text();
        str = str + "1";
        ui->lineEdit->setText(str);
}

void MainWindow::on_two_clicked()
{
    QString str = ui->lineEdit->text();
    str = str + "2";
    ui->lineEdit->setText(str);
}

void MainWindow::on_three_clicked()
{
    QString str = ui->lineEdit->text();
    str = str + "3";
    ui->lineEdit->setText(str);
}

void MainWindow::on_four_clicked()
{
    QString str = ui->lineEdit->text();
    str = str + "4";
    ui->lineEdit->setText(str);
}

void MainWindow::on_five_clicked()
{
    QString str = ui->lineEdit->text();
    str = str + "5";
    ui->lineEdit->setText(str);
}

void MainWindow::on_six_clicked()
{
    QString str = ui->lineEdit->text();
    str = str + "6";
    ui->lineEdit->setText(str);
}

void MainWindow::on_seven_clicked()
{
    QString str = ui->lineEdit->text();
    str = str + "7";
    ui->lineEdit->setText(str);
}

void MainWindow::on_eight_clicked()
{
    QString str = ui->lineEdit->text();
    str = str + "8";
    ui->lineEdit->setText(str);
}

void MainWindow::on_nine_clicked()
{

    QString str = ui->lineEdit->text();
    str = str + "9";
    ui->lineEdit->setText(str);
}

void MainWindow::on_zero_clicked()
{
    QString str = ui->lineEdit->text();
    str = str + "0";
    ui->lineEdit->setText(str);
}

void MainWindow::on_Delete_clicked()
{
    QString str = ui->lineEdit->text();
    str.resize(str.size() - 1);
    ui->lineEdit->setText(str);
}

void MainWindow::on_allclear_clicked()
{
    QString str = ui->lineEdit->text();
    str.clear();
    ui->lineEdit->setText(str);
}

void MainWindow::on_zarb_clicked()
{
    QString str = ui->lineEdit->text();
    bool convertOK;
    FirstNum = str.toInt(&convertOK);
    str = str + "X";
    ui->lineEdit->setText(str);


}

void MainWindow::on_taqsim_clicked()
{
    QString str = ui->lineEdit->text();
    bool convertOK;
    FirstNum = str.toInt(&convertOK);
    str = str + "/";
    ui->lineEdit->setText(str);
}

void MainWindow::on_mod_clicked()
{
    QString str = ui->lineEdit->text();
    bool convertOK;
    FirstNum = str.toInt(&convertOK);
    str = str + "%";
    ui->lineEdit->setText(str);
}

void MainWindow::on_sum_clicked()
{
    QString str = ui->lineEdit->text();
    bool convertOK;
    FirstNum = str.toInt(&convertOK);
    str = str + "+";
    ui->lineEdit->setText(str);
}

void MainWindow::on_minus_clicked()
{
    QString str = ui->lineEdit->text();
    bool convertOK;
    FirstNum = str.toInt(&convertOK);
    str = str + "-";
    ui->lineEdit->setText(str);
}

void MainWindow::on_equal_clicked()
{
    qDebug() << "IM HERE";
    bool convertOK;
    int x = 0;
    QString secstr;
    QString str = ui->lineEdit->text();
    for(int i = 0;i < str.size();i++)
    {
        if(str[i] == 'X')
        {
            for(int j = i + 1;j < str.size();j++ , x++)
            {
                secstr[x] = str[j];
            }
            SecNum = secstr.toInt(&convertOK);
            int result = SecNum*FirstNum;
            QString s = QString::number(result);

            ui->lineEdit->setText(s);
            break;
        }
        else if(str[i] == '+')
        {
            for(int j = i + 1;j < str.size();j++ , x++)
            {
                secstr[x] = str[j];
            }
            SecNum = secstr.toInt(&convertOK);
            int result = SecNum+FirstNum;
            QString s = QString::number(result);
            ui->lineEdit->setText(s);
            break;
        }
        else if(str[i] == '/')
        {
            for(int j = i + 1;j < str.size();j++ , x++)
            {
                secstr[x] = str[j];
            }
            SecNum = secstr.toInt(&convertOK);
            double result = (double)FirstNum/SecNum;
            QString s = QString::number(result);
            ui->lineEdit->setText(s);
            break;
        }
        else if(str[i] == '%')
        {
            for(int j = i + 1;j < str.size();j++ , x++)
            {
                secstr[x] = str[j];
            }
            SecNum = secstr.toInt(&convertOK);
            int result = SecNum%FirstNum;
            QString s = QString::number(result);
            ui->lineEdit->setText(s);
            break;
        }
        else if(str[i] == '-')
        {
            for(int j = i + 1;j < str.size();j++ , x++)
            {
                secstr[x] = str[j];
            }
            SecNum = secstr.toInt(&convertOK);
            int result = SecNum-FirstNum;
            QString s = QString::number(result);
            ui->lineEdit->setText(s);
            break;
        }
    }
}
