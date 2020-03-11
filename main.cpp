#include "connect4.h"

#include <QApplication>
#include <QPlainTextEdit>
#include <QPalette>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Connect4 w;
    w.show();
    return a.exec();
}
