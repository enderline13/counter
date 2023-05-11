

#include <QtWidgets>
#include <QString>

class Counter : public QWidget
{
    Q_OBJECT
    qint32 count;
    QLCDNumber* num;
    QPushButton* butt;
public:
    Counter();
public slots:
    void counterIncrease();
};

