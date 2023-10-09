QT       += core gui
QT       += printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    third_party/qcustomplot.cpp \
    ../controller/s21_calculator_controller.cc \
    ../model/s21_calculator.cc \
    ../model/s21_polish_notation.cc

HEADERS += \
    mainwindow.h \
    third_party/qcustomplot.h \
    ../controller/s21_calculator_controller.h \
    ../model/*.h \
    ../model/s21_calculator.h \
    ../model/s21_polish_notation.h \
    ../model/s21_model.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
