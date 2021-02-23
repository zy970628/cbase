#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cstddef>
#include <QString>
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


void MainWindow::on_pushButton_clicked()
{
    //随机字母
    srand((unsigned int)time(NULL));
    for(int i=0;i<20;i++)
        arr[i]=rand()%26+'a';
    arr[20]=0;
    //重置界面
    ui->label->setText("");
    ui->textEdit->setText("");
    ui->label_2->setText("");
    ui->label->setText(arr);

    start_time=time(NULL);

    //重置计数器
    value = 0;
}

void MainWindow::on_pushButton_2_clicked()
{
    end_time=time(NULL);
    //获取文本内容
    QString txt = ui->textEdit->toPlainText();
    //去除文本中的空格
    txt.isEmpty();

    const char * temp = txt.toStdString().data();
    int i = 0;

    while(*temp==arr[i] && *temp)
    {
        temp++;
        i++;
        value++;
    }

    QString res = QString("Right: %1%  Time:  %2(s)").arg(value/20.0*100).arg(end_time-start_time);
    //res.arg(value/20.0*100).arg("Time:").arg(end_time-start_time);
    ui->label_2->setText(res);
}
