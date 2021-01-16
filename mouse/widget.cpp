#include "widget.h"
#include "ui_widget.h"
#include <QMouseEvent>
#include <QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}
void Widget::mousePressEvent(QMouseEvent *event)
{
    qDebug()<<"点"<<event->x()<<event->y();
    if(event->button() == Qt::LeftButton)
    {
        qDebug()<<"左";
    }
    else if(event->button() == Qt::RightButton)
    {
        qDebug()<<"右";
    }
}
void Widget::mouseMoveEvent(QMouseEvent *event)
{
    qDebug()<<"点"<<event->x()<<event->y();
}

