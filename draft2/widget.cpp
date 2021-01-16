#include "widget.h"
#include "ui_widget.h"
#include <QPainter>
#include <QPixmap>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    i = 0;
    j = 0;
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *event)
{
    QPainter p(this);
    p.drawPixmap(i,j,50,50,QPixmap("../image/12.jpg"));
}

void Widget::mousePressEvent(QMouseEvent *event)
{
    i = event->x();
    j = event->y();
    //刷新绘图
    this->update();
}
