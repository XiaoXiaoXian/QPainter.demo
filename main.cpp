#include "paintedwidget.h"
#include "painterantialiasing.h"
#include "qpainterpath_dome_c.h"
#include "backgroundpicture_demo.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PaintedWidget w1;
    w1.show();
    painterAntialiasing w2;
//    w2.show();

//    QPainterPath_dome_c w3;
//    w3.show();

    BackgroundPicture_Demo wBackgroundPicture_Demo;
    wBackgroundPicture_Demo.show();

    return a.exec();
}
