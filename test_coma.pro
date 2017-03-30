QT += core
QT -= gui

CONFIG += c++11
CONFIG += -Wa
CONFIG += -fverbose-asm
CONFIG += -masm=intel
CONFIG += -ad
CONFIG += -g



TARGET = test_coma
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp
