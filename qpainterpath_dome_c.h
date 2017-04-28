#ifndef QPAINTERPATH_DOME_C_H
#define QPAINTERPATH_DOME_C_H

#include <QWidget>

class QPainterPath_dome_c:public QWidget
{
    Q_OBJECT

public:
    QPainterPath_dome_c();
    ~QPainterPath_dome_c();
protected:
    void paintEvent(QPaintEvent *event);
};

#endif // QPAINTERPATH_DOME_C_H
