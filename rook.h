#ifndef ROOK_H
#define ROOK_H
#include "pieces.h"

class Rook : public Pieces
{
public:
    //constructor
    Rook(string team, QGraphicsItem *parent = 0);
    //methods
    void available_movements();
};

#endif // ROOK_H
