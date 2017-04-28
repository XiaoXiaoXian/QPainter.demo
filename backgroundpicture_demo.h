#ifndef BACKGROUNDPICTURE_DEMO_H
#define BACKGROUNDPICTURE_DEMO_H

#include <QWidget>

class BackgroundPicture_Demo : public QWidget
{
    Q_OBJECT
public:
    explicit BackgroundPicture_Demo(QWidget *parent = 0);

signals:

public slots:
protected:
    void paintEvent(QPaintEvent *event);
};

#endif // BACKGROUNDPICTURE_DEMO_H
