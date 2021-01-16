#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->lineEdit->setEchoMode(QLineEdit::Password);//设置密码模式
    ui->lineEdit->setTextMargins(100,0,0,0);//设置间距
    ui->lineEdit->setText("hello");//设置行编辑内容
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_lineEdit_returnPressed()
{
    qDebug()<<ui->lineEdit->text();//获取行编辑内容
}
