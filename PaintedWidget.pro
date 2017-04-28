#-------------------------------------------------
#
# Project created by QtCreator 2014-05-22T09:13:51
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PaintedWidget
TEMPLATE = app


SOURCES += main.cpp\
        paintedwidget.cpp \
    painterantialiasing.cpp \
    qpainterpath_dome_c.cpp \
    backgroundpicture_demo.cpp

HEADERS  += paintedwidget.h \
    painterantialiasing.h \
    qpainterpath_dome_c.h \
    backgroundpicture_demo.h

FORMS +=

RESOURCES += \
    image.qrc
