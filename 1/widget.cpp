#include "widget.h"
#include <QFileDialog>
#include <QString>
#include <QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    this->resize(600,400);
    button = new QPushButton("点",this);
    button->resize(100,100);
    button->move(250,100);
    connect(button,&QPushButton::clicked,this,[](){
//       QString str = QFileDialog::getOpenFileName();
//       qDebug()<<str;
        QStringList str = QFileDialog::getOpenFileNames();
        qDebug()<<str;
    });


}

Widget::~Widget()
{
}

