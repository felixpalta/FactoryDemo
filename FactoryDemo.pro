TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    pizzastore.cpp \
    nypizzastore.cpp \
    chicagopizzastore.cpp \
    cheesepizza.cpp \
    clampizza.cpp \
    peperonipizza.cpp \
    veggiepizza.cpp

*g++*{
QMAKE_CXXFLAGS +=   -Weffc++ -std=c++11 -pedantic -Wall -Wextra \
                    -Wunreachable-code -Wshadow \
                    -Wold-style-cast -Wnon-virtual-dtor  \
                    -Woverloaded-virtual \
                    -Wenum-compare  \
                                        #OFF for QT
                    -Wctor-dtor-privacy	\
                    -Wsign-conversion  \
                    -Wconversion \
}

HEADERS += \
    pizza.h \
    pizzastore.h \
    nypizzastore.h \
    chicagopizzastore.h \
    pizzaingredientfactory.h \
    nypizzaingredientfactory.h \
    cheesepizza.h \
    clampizza.h \
    peperonipizza.h \
    veggiepizza.h \
    chicagoingredientfactory.h
