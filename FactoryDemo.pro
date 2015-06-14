TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    pizzastore.cpp \
    nypizzastore.cpp \
    chicagopizzastore.cpp

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
    nystylecheesepizza.h \
    nystylepizza.h \
    nystyleclampizza.h \
    chicagostylepizza.h \
    chicagostylecheesepizza.h \
    chicagostyleclampizza.h \
    nypizzastore.h \
    chicagopizzastore.h
