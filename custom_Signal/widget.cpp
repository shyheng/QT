#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("父");
    this->sonwindow = new Son;
    sonwindow->show();
    button1 = new QPushButton;
    button1->setParent(this);
    button1->setText("隐藏父类，显示子类");
    connect(button1,&QPushButton::clicked,this,&Widget::button_cb);
    connect(sonwindow,&Son::show_hide_signals,this,&Widget::signal_cd);
}

void Widget::signal_cd()
{
    this->show();
    this->sonwindow->hide();
}

void Widget::button_cb()
{
    this->hide();
    this->sonwindow->show();
}

Widget::~Widget()
{
    delete ui;
}

