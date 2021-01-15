#include "widget.h"
#include <QMessageBox>
#include <QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    this->resize(600,400);
    button = new QPushButton("关于",this);
    button->resize(100,100);
    button->move(100,100);
    connect(button,&QPushButton::clicked,this,[=](){
        //模块化
        QMessageBox::about(this,"标题","内容");
    });

    button1 = new QPushButton("询问",this);
    button1->resize(100,100);
    button1->move(200,100);
    connect(button1,&QPushButton::clicked,this,[=](){
        //模块化
        int ret = QMessageBox::question(this,"标题","你需要吗",QMessageBox::Open|QMessageBox::Save);
        if(ret == QMessageBox::Open)
        {
            qDebug()<<"open";
        }
        else
        {
            qDebug()<<"save";
        }
    });
}

Widget::~Widget()
{
}

