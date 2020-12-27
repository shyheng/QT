#include "widget.h"
#include <QPushButton>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
//    button = new QPushButton;
//    button = new QPushButton(this);//构造函数时 指定父对象
    button = new QPushButton("登录",this);//构造函数时指定父对象和设置文本
    //如果不给按钮指定父类对象 那么按钮和窗口是单独显示 如果按钮指定了父类对象 只要父类显示 按钮也会显示
    button->show();
    //指定按钮的父类是窗口
//    button->setParent(this);//指定按钮的父亲是窗口
    button->resize(300,200);//设置按钮的大小
    button->move(100,100);//设置按钮在窗口中的位置
//    button->setText("登录");//设置按钮的文本
}

Widget::~Widget()
{
}

