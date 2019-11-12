#include "mainwindow.h"

#include <QApplication>
#include <QDesktopWidget>

int main(int argc, char *argv[])
{       QApplication BasicCalculator(argc, argv);
        MainWindow window;
        window.showMaximized();
        window.setFixedSize(300,400);
        window.move(QApplication::desktop()->screen()->rect().center() - window.rect().center());
        window.show();
        return BasicCalculator.exec();
}
