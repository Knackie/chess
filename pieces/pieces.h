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

    bool never_moved, is_ready;
protected:
    string team;
public:
    //constructor
    Pieces(string team, QGraphicsItem *parent =0);

    //methods
    virtual void available_movements() = 0;
    virtual void set_image() = 0;

    //destructor
};

#endif // PIECES_H
