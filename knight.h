#ifndef KNIGHT_H
#define KNIGHT_H
#include "pieces.h"

class Knight : public Pieces
{
public:
    //constructor
    Knight(string team, QGraphicsItem *parent = 0);
    //methods
    void available_movements();
};

#endif // KNIGHT_H
