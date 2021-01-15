#include "widget.h"
#include <QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    button = new QPushButton("点",this);
    int a = 10;
    int b = 20;
    //槽函数可以是一个lambda表达式
    //lambda表达式中[]中写的是=，代表将上面得到函数的局部变量以值传递的方式到lambda表达式
    //lambda表达式中[]中写的是&，代表将上面得到函数中的局部变量以值传参的方式传入到lambda表达式
    //lambda表达式中[]中写的是a，代表将上面得到函数中的局部变量a以值传参的方式传入到lambda表达式
    //lambda表达式中[]中写的是a,b，代表将上面得到函数中的局部变量a,b以值传参的方式传入到lambda表达式
    //lambda表达式中[]中写的是&a，代表将上面得到函数中的局部变量a以引用传递的方式传入到lambda表达式
    //mutable修饰了，作用是可以在lambda修改传入变量的值
    //->int 代表lambda表达式返回值是一个int类型
    connect(button,&QPushButton::clicked,this,[&]() mutable->int{
        a = 100;
        qDebug()<<a;
        qDebug()<<b;
        qDebug()<<"点啊";
    });
}

Widget::~Widget()
{
}

