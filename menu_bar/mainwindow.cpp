#include "mainwindow.h"
#include <QMenuBar>
#include <QAction>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    //取出菜单栏
    QMenuBar *menubar1 = this->menuBar();
    //向菜单栏上去添加 菜单
    QMenu * filemenu = menubar1->addMenu("文件");
    QMenu * fileedit = menubar1->addMenu("编辑");
    //向菜单添加菜单项
    QAction *openaction = filemenu->addAction("打开");
    filemenu->addSeparator();
    QAction *saveaction = filemenu->addAction("保存");
}

MainWindow::~MainWindow()
{
}

