#ifndef QUEEN_H
#define QUEEN_H
#include "../piece.h"
#include "game.h"

extern Game *game;

class Queen : public Piece
{
public:
    //constructor
    Queen(string team, QGraphicsItem *parent = 0);
    //methods
    void available_movements();
    void set_image();
};

#endif // QUEEN_H
