TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.c

message($$QMAKESPEC)
linux-buildroot-g++{target.path = root
INSTALLS += target}
