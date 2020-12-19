#ifndef PIECES_H
#include <string>
#include <vector>

using namespace std;

#define PIECES_H


class pieces
{
private:
    //Create name of piece, exemple piece(1) = king
vector <string> piece_name {"","KING","QUEEN","ROOK","KNIGHT","BISHOP","PAWN"};
vector <int> piece_value {0,0,9,5,3,3,1};
vector <int> movements_rook {-10,10,-1,1};
vector <int> movements_bishop {-11,-9,11,9};
vector <int> movements_knight {-12,-21,-19,-8,12,21,19,8};
public:
    pieces(string piece);
};

#endif // PIECES_H
