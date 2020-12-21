#ifndef BISHOP_H
#define BISHOP_H
#include "pieces.h"
#include "game.h"
extern Game *game;
class bishop : public Pieces
{
public:
    //constructor
    bishop(string team, QGraphicsItem *parent = 0);
    //methods
    void available_movements();
    void set_image();
};

#endif // BISHOP_H
