#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include <QGraphicsRectItem>
#include "../pieces/pieces.h"
#include "case.h"
class Board
{
private:
    // for each color, the RGB code
    QColor chess_brown = QColor(148, 80, 50);
    QColor chess_white = QColor(219, 203, 179);
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
