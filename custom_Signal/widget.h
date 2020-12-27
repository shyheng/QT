#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "son.h"
#include <QPushButton>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    Son *sonwindow;
    QPushButton *button1;
public slots:
    void button_cb();
    void signal_cd();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
