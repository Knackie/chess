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
    Case *gameboard[8][8];
    Board *board;
    QGraphicsScene *game_scene;
    string theme;

public:
    //constructor
    Game(QWidget *parent = 0);

    //variables

    //methods
    void addToScene(QGraphicsItem *item);
    void view_menu();
    void view_board();
    void start();

    //setter
    void set_theme(string theme);
    void set_turn(string turn);
    void set_gameboard(int i, int j, Case *id);

    //getter
    string get_turn();
    string get_theme();

    //setter

    //destructor
    ~Game();


};
#endif // GAME_H
