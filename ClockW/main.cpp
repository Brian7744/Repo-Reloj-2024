#include "clockw.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ClockW w;
    w.show();
    return a.exec();
}
