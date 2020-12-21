#ifndef KING_H
#define KING_H
#include "pieces.h"

class King : public Pieces
{
public:
    //constructor
    King(string team, QGraphicsItem *parent = 0);
    //methods
    void available_movements();
};

#endif // KING_H
