QT += core gui widgets

CONFIG += c++11

TARGET = QTBUG-51799-MWE
TEMPLATE = app

SOURCES += main.cpp \
           mainwindow.cpp \
           directorytree.cpp

HEADERS  += mainwindow.h \
            directorytree.h

