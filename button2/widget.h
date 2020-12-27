#ifndef WIDGET_H
#define WIDGET_H
#include "mybutton.h"
#include <QWidget>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    mybutton *b;
};
#endif // WIDGET_H
