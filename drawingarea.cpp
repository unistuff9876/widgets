#include "drawingarea.h"

#include "shapes.cpp"

DrawingArea::DrawingArea(QWidget *parent): QWidget(parent)
{
    setFixedSize(QSize(300, 200));
    myline = new MyLine(80, 100, 50);
    myrect = new MyRect(220, 100, 50);
    angle = 0;
}

void DrawingArea::showEvent(QShowEvent *event)
{
    myTimer = startTimer(16.7);
}

void DrawingArea::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setPen(Qt::red);
    myline->move(angle, &painter);
    myrect->move(angle * (-0.5), &painter);
}

void DrawingArea::timerEvent(QTimerEvent *event)
{
    // если наш таймер то
    if (event->timerId() == myTimer)
    {
        angle = angle + 0.08;
        update(); // обновить внешний вид
    }
    else
    {
        QWidget::timerEvent(event);
    }
    // иначе передать для стандартной
    // обработки
}
void DrawingArea::hideEvent(QHideEvent *event)
{
    killTimer(myTimer); // уничтожить таймер
}
DrawingArea::~DrawingArea()
{
    delete myline;
    delete myrect;
}
