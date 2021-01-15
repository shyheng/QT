#include "mainwindow.h"
#include <QMenuBar>
#include <QAction>
#include <QToolBar>
#include <QStatusBar>
#include <QLabel>
#include <QDockWidget>
#include <QTextEdit>
#include <QPixmap>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->resize(600,400);

    //取出菜单栏
    QMenuBar *menubar1 = this->menuBar();
    //向菜单栏上去添加 菜单
    QMenu * filemenu = menubar1->addMenu("文件");
    QMenu * fileedit = menubar1->addMenu("编辑");
    //向菜单添加菜单项
    QAction *openaction = filemenu->addAction("打开");
    filemenu->addSeparator();//分隔线
    QAction *saveaction = filemenu->addAction("保存");

    //获取工具栏
    QToolBar *toolbar = this->addToolBar("");
    //向工具栏中添加工具（添加菜单项）
    toolbar->addAction(openaction);
    toolbar->addAction(saveaction);

    //取出状态栏
    QStatusBar *status = this->statusBar();
    status->addWidget(new QLabel("状态"));//向状态添加控件

    //创建铆接部件
    QDockWidget *dockwidget = new QDockWidget("这是铆接",this);
    this->addDockWidget(Qt::TopDockWidgetArea,dockwidget);//将浮动窗口添加到mainwindow

    //文本编辑器
    QTextEdit *edit = new QTextEdit("文本编辑器",this);
    this->setCentralWidget(edit);

    //:/new/prefix4/a.bnp
    QPixmap pic;//定义一个图片对象
    pic.load(":/new/prefix4/a.bnp");//给图片对象加载图片
    openaction->setIcon(QIcon(pic));
}

MainWindow::~MainWindow()
{
}

