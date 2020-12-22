#ifndef KNIGHT_H
#define KNIGHT_H
#include "pieces.h"
#include "game.h"
extern Game *game;
class Knight : public Pieces
{
public:
    //constructor
    Knight(string team, QGraphicsItem *parent = 0);
    //methods
    void available_movements();
    void set_image();
};

#endif // KNIGHT_H
