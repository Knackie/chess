#ifndef GAME_H
#define GAME_H

#include <QGraphicsScene>
#include <QGraphicsView>



class Game : public QGraphicsView
{
    Q_OBJECT

public:
    //constructor
    Game(QWidget *parent = nullptr);

    //methods
    void displayMainMenu();
    //destructor
    ~Game();


private:
    QGraphicsScene *gameScene;
};
#endif // GAME_H
