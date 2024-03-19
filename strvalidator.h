#ifndef STRVALIDATOR_H
#define STRVALIDATOR_H

#include <QValidator>

class StrValidator:public QValidator // класс компонента проверки ввода
{
public:
    StrValidator(QObject *parent) : QValidator(parent){}
    virtual State validate(QString &str, int &pos) const
    {
        /*if ()
        {
            return Invalid;
        }
        else
        {
            return Acceptable;
        }
        QString str=inputEdit->text();
        a = str.toDouble(&Ok);
        a *= a
        if (Ok)
        {
            r=a*a;
        }*/
        return Acceptable;
    }
};

#endif // STRVALIDATOR_H
