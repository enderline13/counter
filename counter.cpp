
#include "counter.h"

Counter::Counter()
{
    count = 0;
    num = new QLCDNumber(12);
    butt = new QPushButton("+");
    connect(butt, &QPushButton::clicked, this, &Counter::counterIncrease);
    QVBoxLayout* lay = new QVBoxLayout;
    lay->addWidget(num);
    lay->addWidget(butt);
    lay->setSpacing(15);
    setLayout(lay);
}
void Counter::counterIncrease() {
    num->display(++count);
}

