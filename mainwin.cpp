#include "mainwin.h"

#include <QBoxLayout>

MainWin::MainWin()
{
    this->setWindowTitle("Обработка событий");
    drawingarea = new DrawingArea(this);
    btnexit = new QPushButton("Завершить", this);
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(drawingarea);
    layout->addWidget(btnexit);
    connect
    (
        btnexit,
        QPushButton::clicked,
        this,
        MainWin::close
    );
};
