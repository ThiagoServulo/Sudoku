QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    src/board.cpp \
    src/color.cpp \
    src/field.cpp \
    src/sudokubacktrackingsolver.cpp \
    src/sudokugenerator.cpp \
    src/sudokuutilities.cpp \
    sudokuwindow.cpp

HEADERS += \
    src/board.h \
    src/color.h \
    src/field.h \
    src/sudokubacktrackingsolver.h \
    src/sudokugenerator.h \
    src/sudokuutilities.h \
    sudokuwindow.h

FORMS += \
    sudokuwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Images.qrc
