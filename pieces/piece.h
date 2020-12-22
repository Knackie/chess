#ifndef PIECE_H
#define PIECE_H
#include <QGraphicsItem>
#include <QGraphicsSceneMouseEvent>
#include <string>
using namespace std;

class Case;
class Piece:public QGraphicsPixmapItem
{
private:
    // somes variables, to know the team, and if piece had never move i.e pawn can move 2 box if they are never moved

    bool never_moved, is_ready;
    Case *use_case;
protected:
    string team;
public:
    //constructor
    Piece(string team, QGraphicsItem *parent =0);

    //methods
    virtual void available_movements() = 0;

    //setter
    void set_case(Case *use_case);
    virtual void set_image() = 0;

    //getter
    string get_team();
    bool get_ready();

    //destructor
};

#endif // PIECE_H
