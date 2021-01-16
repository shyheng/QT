#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QPainter>
#include <QPen>
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

void Widget::paintEvent(QPaintEvent *event)
{
    //绘图一定要在这个函数中绘图
    //画家
    QPainter p(this);//定义了一个画家 并且指定了绘图设备
    p.drawPixmap(0,0,this->width(),this->height(),QPixmap("../image/11.jpg"));

    QPen pen;//定义一支笔
    pen.setWidth(5);
    pen.setColor(QColor(Qt::red));//设置笔的颜色
    //将笔给画家
    p.setPen(pen);
    p.drawLine(50,50,300,300);//画线
    p.drawEllipse(0,0,this->width(),this->height());
}
