TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        computer.cpp \
        computerbuilder.cpp \
        coolcomputersstore.cpp \
        cpu.cpp \
        custompcbuilder.cpp \
        main.cpp \
        officepcbuilder.cpp \
        part.cpp \
        partmanager.cpp \
        prototype.cpp \
        ram.cpp

HEADERS += \
    computer.h \
    computerbuilder.h \
    coolcomputersstore.h \
    cpu.h \
    custompcbuilder.h \
    officepcbuilder.h \
    part.h \
    partmanager.h \
    prototype.h \
    ram.h
