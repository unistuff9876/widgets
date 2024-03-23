#ifndef MAINWIN_H
#define MAINWIN_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include "counter.h"

class MainWin: public QWidget
{
    Q_OBJECT
protected:
    QTextCodec *codec;
    QLabel *label1, *label2;
    Counter *counter1, *counter2;
    QPushButton *calcButton;
    QPushButton *exitButton;
public:
    MainWin(QWidget *parent = nullptr);
};

#endif // MAINWIN_H
