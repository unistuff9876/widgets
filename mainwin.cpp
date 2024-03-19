#include "mainwin.h"

#include <QBoxLayout>

MainWin::MainWin(QWidget *parent): QWidget(parent)
{
    setWindowTitle("Счетчик");

    label1 = new QLabel("Cчет по 1", this);
    label2 = new QLabel("Cчет по 5", this);
    counter1 = new Counter("0", this);
    counter2 = new Counter("0", this);
    calcbutton = new QPushButton("+1", this);
    exitbutton = new QPushButton("Выход", this);

    QHBoxLayout *layout1 = new QHBoxLayout();
    layout1->addWidget(label1);
    layout1->addWidget(label2);

    QHBoxLayout *layout2 = new QHBoxLayout();
    layout2->addWidget(counter1);
    layout2->addWidget(counter2);

    QHBoxLayout *layout3 = new QHBoxLayout();
    layout3->addWidget(calcbutton);
    layout3->addWidget(exitbutton);

    QVBoxLayout *layout4 = new QVBoxLayout(this);
    layout4->addLayout(layout1);
    layout4->addLayout(layout2);
    layout4->addLayout(layout3);

    // связь сигнала нажатия кнопки и слота закрытия окна
    connect
    (
        calcbutton,
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
        exitbutton,
        QPushButton::clicked,
        this,
        MainWin::close
    );
}
