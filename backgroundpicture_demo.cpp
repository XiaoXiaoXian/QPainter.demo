#include "backgroundpicture_demo.h"
#include <QPicture>
#include <QPainter>
#include <QImage>

BackgroundPicture_Demo::BackgroundPicture_Demo(QWidget *parent) : QWidget(parent)
{
    resize(800,600);
    setWindowTitle(tr("BackgroundPicture_Demo Demo1"));
}

void BackgroundPicture_Demo::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QPainter painter_gan(this);
    QImage image;
    QImage image_gan;
    if(image.load(":/image/daozhagang.png"))
    {
         resize(image.width(),image.height());
         painter.drawImage(QPointF(0,0),image);
         painter.drawText(10,10,QString("width:")+QString::number( image.width())+" height:"+QString::number( image.height()));
    }
    else
        painter.drawText(QPointF(40.0,40.0),"open image error!!");
    if(image_gan.load(":/image/gan.png"))
    {
        painter_gan.setWindow( QRect( -601,-339,image.width(),image.height()));

//        painter_gan.drawText(QPoint(0,0),"drawText @ gan");

//         painter_gan.drawImage(QPointF(/*675,325*/500,10),image_gan);

        painter_gan.rotate(0);
        painter.drawText(QPointF(0,0),"drawText@(0,0) &0 ");
        painter_gan.rotate(90);
        painter.drawText(QPointF(0,0),"drawText@(0,0) &90 ");
         painter_gan.rotate(90);
         painter.drawText(QPointF(0,0),"drawText@(0,0) &180 ");
         painter_gan.rotate(90);
         painter.drawText(QPointF(0,0),"drawText@(0,0) &270 ");
         painter_gan.drawImage(QPointF(-0,0),image_gan);
         painter_gan.rotate(270);
         painter_gan.drawImage(QPointF(-0,0),image_gan);

    }
    else
    {
         painter.drawText(QPointF(20,80),"open :/image/gan.png error!!");
    }





}
