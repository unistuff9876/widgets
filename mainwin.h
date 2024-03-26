#ifndef MAINWIN_H
#define MAINWIN_H

#include <QtGui>
#include <QPushButton>

#include "drawingarea.h"

class MainWin: public QWidget // класс окна
{
protected:
    DrawingArea *drawingarea; // область отображения рисунка
    QPushButton *btnexit;
public:
    MainWin();
};

#endif // MAINWIN_H
