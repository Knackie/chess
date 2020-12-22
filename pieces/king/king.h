#ifndef KING_H
#define KING_H
#include "../piece.h"
#include "game.h"

extern Game *game;

class King : public Piece
{
public:
    //constructor
    King(string team, QGraphicsItem *parent = 0);
    //methods
    void available_movements();
    void set_image();
};

#endif // KING_H
