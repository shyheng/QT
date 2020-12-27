#include "son.h"

Son::Son(QWidget *parent) : QWidget(parent)
{
    this->setWindowTitle("子");
    button2 = new QPushButton("隐藏子类显示父类",this);\
    connect(button2,&QPushButton::clicked,this,&Son::emit_mysignal);
}

void Son::emit_mysignal()
{
    //点击按钮的槽函数 发射信号
    emit show_hide_signals(10);
}
