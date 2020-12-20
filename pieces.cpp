#include "pieces.h"
#include "game.h"

extern Game *game;

Pieces::Pieces(string team, QGraphicsItem *parent):QGraphicsPixmapItem(parent)
{
    this->team = team;
    never_moved = true;
    is_ready = true;
}
