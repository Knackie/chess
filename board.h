#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include <QGraphicsRectItem>
#include "pieces.h"

class Board
{
private:
    vector<Piece *> white;
    vector<Piece *> black;

public:
    void chessboard(int x, int y);
    Board();
    void add_piece();
    void reset_board();
    void set_white();
    void set_black();
};

#endif // BOARD_H
