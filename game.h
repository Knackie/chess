#ifndef GAME_H
#define GAME_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <string>
#include "board.h"

using namespace std;


class Game : public QGraphicsView
{
    Q_OBJECT

public:
    //constructor
    Game(QWidget *parent = nullptr);

    //methods
    void MainMenu();
    void start();
    void Board();
    void set_turn();


    //getter
    string get_turn(string turn);

    //destructor
    ~Game();

private:
    QGraphicsScene *gameScene;
};
#endif // GAME_H
