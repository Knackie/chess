#ifndef BISHOP_H
#define BISHOP_H
#include "../piece.h"
#include "../../game.h"

extern Game *game;

class Bishop : public Piece
{
public:
    //constructor
    Bishop(string team, QGraphicsItem *parent = 0);
    //methods
    void available_movements();
    void set_image();
};

#endif // BISHOP_H
