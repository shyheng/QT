#include "widget.h"

#include <QApplication>//qt框架的头哦文件

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);//QT的框架初始化
    Widget w;//定义一个窗口对象
    w.show();//将创建的窗口控件显示
    return a.exec();//a.exec()作用是让程序不死 类似于while(1)循环 循环检测事件的产生
}
