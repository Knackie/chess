#ifndef ROOK_H
#define ROOK_H
#include "../pieces.h"
#include "game.h"

extern Game *game;

class Rook : public Pieces
{
public:
    //constructor
    Rook(string team, QGraphicsItem *parent = 0);
    //methods
    void available_movements();
    void set_image();
};

#endif // ROOK_H
