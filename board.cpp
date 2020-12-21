#include "board.h"
#include "game.h"
#include "pawn.h"
#include "queen.h"
#include "rook.h"
#include "pawn.h"
#include "king.h"
#include "knight.h"
#include "bishop.h"
#include "case.h"

extern Game *game;

Board::Board()
{
    set_white();
    set_white();

}
void Board::chessboard(int x, int y)
{
    int TAILLE = 100;
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++)
        {
            Case *chess_case = new Case();
            game->gameboard[i][j] = chess_case;
            chess_case->set_row(i);
            chess_case->set_col(j);
            chess_case->setPos(x+TAILLE*j,y+TAILLE*i);
            if((i+j)%2==0)
                chess_case->set_case_color(Qt::white);
            else
                chess_case->set_case_color(Qt::darkGray);
            game->addToScene(chess_case);



        }
    }

}
void Board::set_black()
{

}
void Board::set_white()
{

}
