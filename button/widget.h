#ifndef WIDGET_H
#define WIDGET_H
#include <QPushButton>
#include <QWidget>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    QPushButton *button;
};
#endif // WIDGET_H
