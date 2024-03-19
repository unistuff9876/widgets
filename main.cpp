#include <QApplication>
#include "mainwin.h"
#include "mainwin.cpp"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv); // создание объекта-приложения
    MainWin mainwin;
    mainwin.show();
    return app.exec();
}
