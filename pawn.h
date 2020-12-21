#ifndef PAWN_H
#define PAWN_H
#include "pieces.h"

class Pawn : public Pieces
{
public:
    //constructor
    Pawn(string team, QGraphicsItem *parent = 0);
    //methods
    void available_movements();
};

#endif // PAWN_H
