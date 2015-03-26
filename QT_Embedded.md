#How to compile QT embedded libraries.

From http://qt.nokia.com/downloads download the latest QT Libraries for embedded Linux.

Untar the archieve:
```
$ tar -xvf qt-everywhere..tar.gz
```

Add qt-everywhere to your PATH variable in .bashrc:
```
PATH=/home/stud/qt-everywhere-opensource-src-4.6.2/
```

copy the existing linux-arm configuration to a new folder:
```
$ mkdir /home/stud/qt-everywhere-opensource-src-4.6.2/mkspecs/qws/linux-armv7-g++
$ cp /home/stud/qt-everywhere-opensource-src-4.6.2/mkspecs/qws/linux-armv-g++ /home/stud/qt-everywhere-opensource-src-4.6.2/mkspecs/qws/linux-armv7-g++
```

Now, replace the existing content of linux-armv7-g++/qmake.conf with this:
```
#
# qmake configuration for building for ARMv7 devices with arm-none-linux-gnueabi-g++
#

include(../../common/g++.conf)
include(../../common/linux.conf)
include(../../common/qws.conf)

# modifications to g++.conf
QMAKE_CC                = /opt/CodeSourcery/Sourcery_G++_Lite_2007q3/bin/arm-none-linux-gnueabi-gcc
QMAKE_CXX               = /opt/CodeSourcery/Sourcery_G++_Lite_2007q3/bin/arm-none-linux-gnueabi-g++
QMAKE_LINK              = /opt/CodeSourcery/Sourcery_G++_Lite_2007q3/bin/arm-none-linux-gnueabi-g++
QMAKE_LINK_SHLIB        = /opt/CodeSourcery/Sourcery_G++_Lite_2007q3/bin/arm-none-linux-gnueabi-g++
QMAKE_CFLAGS           += -O3 -march=armv7-a -mtune=cortex-a8 -mfpu=neon -mfloat-abi=softfp
QMAKE_CXXFLAGS         += -O3 -march=armv7-a -mtune=cortex-a8 -mfpu=neon -mfloat-abi=softfp
#-mfpu=vfp

# modifications to linux.conf
QMAKE_AR                = /opt/CodeSourcery/Sourcery_G++_Lite_2007q3/bin/arm-none-linux-gnueabi-ar cqs
QMAKE_OBJCOPY           = /opt/CodeSourcery/Sourcery_G++_Lite_2007q3/bin/arm-none-linux-gnueabi-objcopy
QMAKE_STRIP             = /opt/CodeSourcery/Sourcery_G++_Lite_2007q3/bin/arm-none-linux-gnueabi-strip

QMAKE_INCDIR += /home/stud/tslib_arm/include
QMAKE_LIBDIR += /home/stud/tslib_arm/lib

load(qt_config)
```

Configure the libraries to use the linux-armv7-g++ configuration:
```
$ cd /home/stud/qt-everywhere-opensource-src-4.6.2
$ ./configure -embedded arm -xplatform qws/linux-armv7-g++ -qt-kbd-linuxinput -qt-mouse-
tslib -opensource -verbose -R /home/stud/tslib_arm/lib/
```

Make the libraries (Grab ...something, this takes several hours):
```
$ make
```

and install them:
```
$ make install
```