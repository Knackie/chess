#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include <QGraphicsRectItem>
#include "pieces.h"
#include "case.h"
class Board
{
private:
    // vector of piece, for each color
    //vector<Piece *> white, black;

public:
    //constructor
    Board();
    // create the chessboard
    void chessboard(int x, int y);


    // for add some piece
    void add_piece();
    /// for reset the board (end game, new game)
    void reset_board();
    // initialise each color
    void set_white();
    void set_black();
};

#endif // BOARD_H
