#include "welcome.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    welcome wel;
    wel.show();

    return a.exec();
}
