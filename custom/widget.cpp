#include "widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    button = new QPushButton;
    button->setParent(this);
    button->setText("shy");
    //注册信号和槽的连接
    //槽函数可以是普通的成员函数 还可以 是槽函数
    //如果信号没有参数 槽函数也不能有参数 如果信号有参数，槽函数可以有也可以没有
     connect(button,&QPushButton::pressed,this,&Widget::print);
}

void Widget::print()
{
    qDebug() << "连接";
}

Widget::~Widget()
{
}

