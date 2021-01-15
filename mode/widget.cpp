#include "widget.h"
#include <QFileDialog>
#include <QString>
#include <QDebug>
#include <QDialog>
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

    button1 = new QPushButton("模态对话框",this);
    button1->resize(100,100);
    button1->move(250,200);
    connect(button1,&QPushButton::clicked,this,[](){
        //定义一个对话框
        QDialog dialog;
        dialog.setWindowTitle(tr("shy"));//设置对话框标题
        dialog.exec();//阻塞对话框
    });

    button2 = new QPushButton("非模态对话框",this);
    button2->resize(100,100);
    button2->move(450,200);
    connect(button2,&QPushButton::clicked,this,[](){
        //定义一个对话框
        QDialog *dialog = new QDialog;
        dialog->setAttribute(Qt::WA_DeleteOnClose);//关闭自动释放
        dialog->setWindowTitle(tr("zph"));//设置对话框标题
        dialog->show();
    });
}

Widget::~Widget()
{
}

