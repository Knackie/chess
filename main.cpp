#include "game.h"
#include <QApplication>

Game *game;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    game = new Game();
    game->show();
    //game->view_menu();
    game->view_board();
    return a.exec();
}
