#include "board.h"
#include "../game.h"
#include "../pieces/pawn/pawn.h"
#include "../pieces/queen/queen.h"
#include "../pieces/rook/rook.h"
#include "../pieces/pawn/pawn.h"
#include "../pieces/king/king.h"
#include "../pieces/knight/knight.h"
#include "./pieces/bishop/bishop.h"
#include "case.h"

extern Game *game;

Board::Board()
{


    set_white();
    set_black();

}
void Board::chessboard(int x, int y)
{
    int TAILLE = 100;
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++)
        {
            Case *chess_case = new Case();
            game->set_gameboard(i,j,chess_case);
            chess_case->set_row(i);
            chess_case->set_col(j);
            chess_case->setPos(x+TAILLE*j,y+TAILLE*i);
            if((i+j)%2)
                chess_case->set_case_color(chess_white);
            else
                chess_case->set_case_color(chess_brown);
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
