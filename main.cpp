#include "simplecalculator.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SimpleCalculator w;
    w.setWindowTitle("SimpleCalculator");
    w.show();

    return a.exec();
}
