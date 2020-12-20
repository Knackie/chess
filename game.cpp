#include "game.h"
#include <QPixmap>

Game::Game(QWidget *parent) : QGraphicsView(parent)
{
    gameScene = new QGraphicsScene();
    gameScene->setSceneRect(0,0,1400,900);
    // we want to keep on size (to avoid to rezise pawn & chessboard
    setFixedSize(1400,900);
    // disable all scroll bar
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setScene(gameScene);
    // define the background color
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::black);
    setBackgroundBrush(brush);
}

Game::~Game()
{

}

void Game::displayMainMenu()
{

}
