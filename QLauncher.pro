QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    src/backend/Backend.cxx \
    src/tray/Tray.cxx \
    src\main.cxx \
    src\Config\Config.cxx

HEADERS += \
    src/backend/Backend.hxx \
    src/tray/Tray.hxx \
    src\Config\Config.hxx

FORMS += \
    src/tray/Tray.ui \
    src\Config\Config.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res/resources.qrc

RC_ICONS += \
    res/icon.ico
