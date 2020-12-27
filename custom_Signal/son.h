#ifndef SON_H
#define SON_H

#include <QWidget>
#include <QPushButton>
class Son : public QWidget
{
    Q_OBJECT
public:
    explicit Son(QWidget *parent = nullptr);
    QPushButton *button2;

signals:
//信号没有返回值，可以有参数 只需要声明
    void show_hide_signals(int a);
public slots:
    void emit_mysignal();
};

#endif // SON_H
