#include "piece.h"
#include "game.h"

extern Game *game;

Piece::Piece(string team, QGraphicsItem *parent):QGraphicsPixmapItem(parent)
{
    this->team = team;
    never_moved = true;
    is_ready = true;
}
void Piece::set_case(Case *use_case)
{
    this->use_case = use_case;
}
string Piece::get_team()
{
    return team;
}
