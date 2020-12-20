#ifndef PIECES_H
#define PIECES_H
#include <QGraphicsItem>
#include <QGraphicsSceneMouseEvent>
#include <string>
using namespace std;


class Pieces
{
public:
    Pieces(string team, QGraphicsItem *parent =0);
};

#endif // PIECES_H
