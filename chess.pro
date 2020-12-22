QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    pieces/bishop/bishop.cpp \
    board/board.cpp \
    board/case.cpp \
    game.cpp \
    pieces/king/king.cpp \
    pieces/knight/knight.cpp \
    main.cpp \
    pieces/pawn/pawn.cpp \
    pieces/pieces.cpp \
    pieces/queen/queen.cpp \
    pieces/rook/rook.cpp

HEADERS += \
    pieces/bishop/bishop.h \
    board/board.h \
    board/case.h \
    game.h \
    pieces/king/king.h \
    pieces/knight/knight.h \
    main.h \
    pieces/pawn/pawn.h \
    pieces/pieces.h \
    pieces/queen/queen.h \
    pieces/rook/rook.h

FORMS +=

TRANSLATIONS += \
    chess_fr_FR.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
