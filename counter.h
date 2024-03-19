#ifndef COUNTER_H
#define COUNTER_H

#include <QObject>
#include <QLineEdit>

class Counter: public QLineEdit
{
    Q_OBJECT
public:
    Counter(const QString &contents, QWidget *parent = nullptr);
public slots:
    void add_one();
signals:
    void tick_signal();
};


#endif // COUNTER_H
