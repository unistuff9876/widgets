#ifndef SHAPES_H
#define SHAPES_H

#include <QtGui>

class Shape
{
protected:
    int x, y, halflen, dx, dy, r;
    virtual void draw(QPainter *Painter) = 0;
public:
    Shape(int X,int Y,int Halflen)
        : x(X), y(Y), halflen(Halflen){}
    void move(float Angle, QPainter *Painter);
};

class MyLine: public Shape
{
protected:
    void draw(QPainter *Painter);
public:
    MyLine(int x,int y,int halflen)
        :Shape(x, y, halflen){}
};

class MyRect: public Shape
{
protected:
    void draw(QPainter *Painter);
public:
    MyRect(int x, int y, int halflen)
        : Shape(x, y, halflen){}
};

#endif // SHAPES_H
