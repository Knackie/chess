#ifndef BOX_H
#define BOX_H
#include "pieces.h"
class Piece;
class Box : public QGraphicsRectItem
{
public:
    //constructor
    Box(QGraphicsItem *parent =0);
    //methods


    //destructor
    ~Box();
};

#endif // BOX_H
