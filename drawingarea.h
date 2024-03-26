#ifndef DRAWINGAREA_H
#define DRAWINGAREA_H

#include <QWidget>

#include "shapes.h"

class DrawingArea: public QWidget
{
    int myTimer;
    float angle;
public:
    DrawingArea(QWidget *parent = nullptr);
    ~DrawingArea();
    MyLine *myline;
    MyRect *myrect;
protected:
    void paintEvent(QPaintEvent *event);
    void timerEvent(QTimerEvent *event);
    void showEvent(QShowEvent *event);
    void hideEvent(QHideEvent *event);
};

#endif // DRAWINGAREA_H
