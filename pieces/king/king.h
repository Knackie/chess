#ifndef KING_H
#define KING_H
#include "../pieces.h"
#include "game.h"

extern Game *game;

class King : public Pieces
{
public:
    //constructor
    King(string team, QGraphicsItem *parent = 0);
    //methods
    void available_movements();
    void set_image();
};

#endif // KING_H
