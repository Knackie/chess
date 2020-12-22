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
            {
                chess_case->set_case_color(chess_white);
            }
            else
            {
                chess_case->set_case_color(chess_brown);
            }
            game->addToScene(chess_case);
        }
    }

}
void Board::view_piece()
{
    //we get a vector of 16 elements, so we need to print one by one
    int b=0,w=0;
    for(int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            Case *chess_case = game->get_gameboard(i,j);
            // if i < 2, black team
            if (i < 2)
            {
                 static int k;
                chess_case->set_piece(list_black[k]);
                game->addToScene(list_black[k++]);
            }
            // if i > 5, we are in the white side
            if (i>5)
            {
               chess_case->set_piece(list_white[w]);
               game->addToScene(list_white[w++]);
            }
        }
    }


}
void Board::set_black()
{
    list_black.push_back(new Rook("Black"));
    list_black.push_back(new Knight("Black"));
    list_black.push_back(new Bishop("Black"));
    list_black.push_back(new Queen("Black"));
    list_black.push_back(new King("Black"));
    list_black.push_back(new Bishop("Black"));
    list_black.push_back(new Knight("Black"));
    list_black.push_back(new Rook("Black"));
    for (int i = 0; i < 8; i++)
    {
         list_black.push_back(new Pawn("Black"));
    }

}
void Board::set_white()
{
   list_white.push_back(new Rook("White"));
   list_white.push_back(new Knight("White"));
   list_white.push_back(new Bishop("White"));
   list_white.push_back(new Queen("White"));
   list_white.push_back(new King("White"));
   list_white.push_back(new Bishop("White"));
   list_white.push_back(new Knight("White"));
   list_white.push_back(new Rook("White"));
   for (int i = 0; i < 8; i++)
   {
        list_white.push_back(new Pawn("White"));
   }
}
