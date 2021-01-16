#include "widget.h"
#include "ui_widget.h"
#include <QMouseEvent>
#include <QDebug>
#include <QKeyEvent>
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

void Widget::wheelEvent(QWheelEvent *event)
{
    if(event->orientation() == Qt::Vertical)//如果方向是垂直
    {
        qDebug()<<"滚轮"<<event->x()<<event->y();
    }
}

void Widget::keyPressEvent(QKeyEvent *event)
{
    qDebug()<<event->key();
    if(event->modifiers() == Qt::ShiftModifier)
    {
        qDebug()<<"shift";
    }
    else if(event->modifiers() == Qt::AltModifier)
    {
        qDebug()<<"alt";
    }
}

void Widget::resizeEvent(QResizeEvent *event)
{
    qDebug()<<event->oldSize();
    qDebug()<<event->size();
}

void Widget::enterEvent(QEvent *event)
{
    qDebug()<<"进入";
}

void Widget::leaveEvent(QEvent *event)
{
    qDebug()<<"离开";
}
