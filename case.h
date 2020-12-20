#ifndef CASE_H
#define CASE_H
#include <QGraphicsRectItem>
#include "pieces.h"
class Piece;
class Case : public QGraphicsRectItem
{
public:
    //constructor
    Case(QGraphicsItem *parent = 0);
    //methods


    //destructor
    ~Case();
};

#endif // CASE_H
