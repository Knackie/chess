#ifndef PAWN_H
#define PAWN_H
#include "../piece.h"
#include "game.h"

extern Game *game;

class Pawn : public Piece
{
public:
    //constructor
    Pawn(string team, QGraphicsItem *parent = 0);
    //methods
    void available_movements();
    void set_image();
};

#endif // PAWN_H
