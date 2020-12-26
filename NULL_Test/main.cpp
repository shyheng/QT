#include <QApplication>//QT的框架头文件
#include <QWidget>
#include <QDebug>
int main(int argc,char *argv[])
{
    QApplication a(argc,argv);//QT的框架初始化
    //QWidget
    QWidget win;
    win.resize(400,300);
    win.setWindowTitle("shy");
    win.show();
    qDebug()<<"hello";

    return a.exec();//让程序不死
}
