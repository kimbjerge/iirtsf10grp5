1. Modify the Makefile generated from Qt for Linux - see A Changes to Makefil

2. make clean

3. make

4. file Sandbox

Sandbox: ELF 32-bit LSB executable, ARM, version 1 (SYSV),
dynamically linked (uses shared libs), for GNU/Linux 2.6.14, not stripped

A: Changes to Makefile:

####### Compiler, tools and options

CC            = arm-none-linux-gnueabi-gcc

CXX           = arm-none-linux-gnueabi-g++

INCPATH       = -I/opt/CodeSourcery/Sourcery\_G++_Lite\_2007q3/arm-none-linux-gnueabi/include -I. -I/home/stud/qt-everywhere-opensource-src-4.6.1/include/QtCore -I/home/stud/qt-everywhere-opensource-src-4.6.1/include/QtNetwork -I/home/stud/qt-everywhere-opensource-src-4.6.1/include/QtGui -I/home/stud/qt-everywhere-opensource-src-4.6.1/include -I. -I. -I._

LINK          = arm-none-linux-gnueabi-g++


LIBS          = $(SUBLIBS) -L/home/stud/tslib\_arm/lib -L/home/stud/qt-everywhere-opensource-src-4.6.1/lib -lQtGui -lQtNetwork -lQtCore -lpthread -lts

AR            = arm-none-linux-gnueabi-ar cqs

QMAKE         = /home/stud/qt-everywhere-opensource-src-4.6.1/bin/qmake

STRIP         = arm-none-linux-gnueabi-strip

.......

moc\_mainwindow.cpp: mainwindow.h
> /home/stud/qt-everywhere-opensource-src-4.6.1/bin/moc $(DEFINES) $(INCPATH) mainwindow.h -o moc\_mainwindow.cpp

moc\_graph.cpp: graph.h
> /home/stud/qt-everywhere-opensource-src-4.6.1/bin/moc $(DEFINES) $(INCPATH) graph.h -o moc\_graph.cpp

......

ui\_mainwindow.h: mainwindow.ui
> /home/stud/qt-everywhere-opensource-src-4.6.1/bin/uic mainwindow.ui -o ui\_mainwindow.h

ui\_graph.h: graph.ui
> /home/stud/qt-everywhere-opensource-src-4.6.1/bin/uic graph.ui -o ui\_graph.h
.......


