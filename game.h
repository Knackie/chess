#ifndef GAME_H
#define GAME_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <string>
#include "pieces.h"
#include "board.h"
#include "case.h"
using namespace std;


class Game : public QGraphicsView
{
    Q_OBJECT
private:

    Board *board;
    QGraphicsScene *game_scene;

public:
    //constructor
    Game(QWidget *parent = 0);

    //variables
    Case *gameboard[8][8];
    //methods
    void addToScene(QGraphicsItem *item);
    void set_board();
    void start();

    //setter
    void set_turn();


    //getter
    string get_turn(string turn);

    //setter

    //destructor
    ~Game();


};
#endif // GAME_H
