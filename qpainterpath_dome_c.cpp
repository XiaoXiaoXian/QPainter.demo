#include "qpainterpath_dome_c.h"
#include <QPainter>
QPainterPath_dome_c::QPainterPath_dome_c()
{
    resize(800,600);
    setWindowTitle(tr("QPainterPath_dome_c Demo1"));
}

QPainterPath_dome_c::~QPainterPath_dome_c()
{

}

void QPainterPath_dome_c::paintEvent(QPaintEvent *event)
{
    QPainterPath path;
    QPainter painter(this);
    path.lineTo(100,200);
    path.addEllipse(100,200,50,50);     //向path中添加图形

    painter.setPen(Qt:: yellow);
    painter.setBrush(Qt::red);
    painter.drawPath(path);   //绘制前面创建的path
    QPainterPath path2;
    path2.addPath(path);   //将前面的path添加到新创建的path中
    path2.translate(200,100);
    painter.drawPath(path2);
    path2.moveTo(200,200);//移动到200,200
}
