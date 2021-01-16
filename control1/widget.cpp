#include "widget.h"
#include <QPixmap>
#include <QMovie>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{

    this->resize(600,400);
    //设置标签
    label = new QLabel(this);
    label->resize(100,100);
    label->move(100,100);
//    label->setText("我是标签");
    label->setText("<a href=\"https://www.baidu.com\">百度一下</a>");
    label->setOpenExternalLinks(true);//设置点击链接自动打开

    //设置标签图片
    label_pic = new QLabel(this);
    label_pic->resize(100,100);
    label_pic->move(200,200);
    label_pic->setPixmap(QPixmap("../image/12.jpg"));
    label_pic->setScaledContents(true);//设置自适应对象

    //设置标签动态图
    label_move = new QLabel(this);
    label_move->resize(100,100);
    label_move->move(300,200);

    QMovie *move = new QMovie("../image/13.gif");
    label_move->setMovie(move);
    label_move->setScaledContents(true);
    move->start();
}

Widget::~Widget()
{
}

