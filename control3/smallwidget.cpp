#include "smallwidget.h"
#include <QHBoxLayout>
smallwidget::smallwidget(QWidget *parent) : QWidget(parent)
{
    slider = new QSlider(Qt::Horizontal,this);
    spin = new QSpinBox(this);

    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(spin);
    layout->addWidget(slider);
    this->setLayout(layout);

    connect(spin,
            static_cast<void (QSpinBox::*)(int)>(&QSpinBox::valueChanged),
            slider,&QSlider::setValue);
    connect(slider,&QSlider::valueChanged,
            spin,&QSpinBox::setValue);
}
