#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    QPushButton *button;
    QPushButton *button1;
    QPushButton *button2;
};
#endif // WIDGET_H
