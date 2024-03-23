#include "mainwin.h"

#include <QBoxLayout>

MainWin::MainWin(QWidget *parent): QWidget(parent)
{
    setWindowTitle("Счетчик");

    label1 = new QLabel("Cчет по 1", this);
    label2 = new QLabel("Cчет по 5", this);
    counter1 = new Counter("0", this);
    counter2 = new Counter("0", this);
    calcButton = new QPushButton("+1", this);
    exitButton = new QPushButton("Выход", this);

    QHBoxLayout *layout1 = new QHBoxLayout();
    layout1->addWidget(label1);
    layout1->addWidget(label2);

    QHBoxLayout *layout2 = new QHBoxLayout();
    layout2->addWidget(counter1);
    layout2->addWidget(counter2);

    QHBoxLayout *layout3 = new QHBoxLayout();
    layout3->addWidget(calcButton);
    layout3->addWidget(exitButton);

    QVBoxLayout *layout4 = new QVBoxLayout(this);
    layout4->addLayout(layout1);
    layout4->addLayout(layout2);
    layout4->addLayout(layout3);

    connect
    (
        calcButton,
        QPushButton::clicked,
        counter1,
        Counter::add_one
    );
    connect
    (
        counter1,
        Counter::tick_signal,
        counter2,
        Counter::add_one
    );
    connect
    (
        exitButton,
        QPushButton::clicked,
        this,
        MainWin::close
    );
}
