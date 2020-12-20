#ifndef GAME_H
#define GAME_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <string>

using namespace std;


class Game : public QGraphicsView
{
    Q_OBJECT

public:
    //constructor
    Game(QWidget *parent = nullptr);

    //methods
    void displayMainMenu();
    void start();
    void displayBoard();
    void set_turn();
    //destructor
    ~Game();

    //getter
    string get_turn(string turn);


private:
    QGraphicsScene *gameScene;
};
#endif // GAME_H
