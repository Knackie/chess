#include "game.h"

Game::Game(QWidget *parent) : QGraphicsView(parent)
{
    game_scene = new QGraphicsScene();
    game_scene->setSceneRect(0,0,1400,900);
    // we want to keep on size (to avoid to rezise pawn & chessboard
    setFixedSize(1400,900);
    // disable all scroll bar
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setScene(game_scene);
    // define the background color
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::black);
    setBackgroundBrush(brush);
}
void Game::addToScene(QGraphicsItem *item)
{
    game_scene->addItem(item);
}


void Game::set_board()
{
    // in this method, we want to print the board
    // this is creating the board, with the color, and setup the number of pieces
    board = new Board();
    board->chessboard(width()/2-400,50);

}

Game::~Game()
{

}
