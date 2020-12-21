#ifndef PAWN_H
#define PAWN_H
#include "pieces.h"
#include "game.h"

extern Game *game;

class Pawn : public Pieces
{
public:
    //constructor
    Pawn(string team, QGraphicsItem *parent = 0);
    //methods
    void available_movements();
    void set_image();
};

#endif // PAWN_H
