#ifndef PIECES_H
#define PIECES_H
#include <QGraphicsItem>
#include <QGraphicsSceneMouseEvent>
#include <string>
using namespace std;


class Pieces:public QGraphicsPixmapItem
{
private:
    // somes variables, to know the team, and if piece had never move i.e pawn can move 2 box if they are never moved
    string team;
    bool never_moved, is_ready;
public:
    //constructor
    Pieces(string team, QGraphicsItem *parent =0);

    //methods


    //destructor
    ~Pieces();
};

#endif // PIECES_H
