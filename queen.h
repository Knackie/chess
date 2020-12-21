#ifndef QUEEN_H
#define QUEEN_H
#include "pieces.h"

class Queen : public Pieces
{
public:
    //constructor
    Queen(string team, QGraphicsItem *parent = 0);
    //methods
    void available_movements();
};

#endif // QUEEN_H
