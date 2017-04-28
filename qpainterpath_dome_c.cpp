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
    path.addEllipse(100,200,50,50);     //��path�����ͼ��

    painter.setPen(Qt:: yellow);
    painter.setBrush(Qt::red);
    painter.drawPath(path);   //����ǰ�洴����path
    QPainterPath path2;
    path2.addPath(path);   //��ǰ���path��ӵ��´�����path��
    path2.translate(200,100);
    painter.drawPath(path2);
    path2.moveTo(200,200);//�ƶ���200,200
}
