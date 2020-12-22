#ifndef CASE_H
#define CASE_H
#include <QGraphicsRectItem>
#include <QBrush>
#include "../pieces/piece.h"
class Piece;
class Case : public QGraphicsRectItem
{
private:
    QBrush brush;
    bool is_used;
    string piece_name, piece_color;
    int row, col;
    Piece *on;
public:
    //constructor
    Case(QGraphicsItem *parent = 0);
    //methods

    //setter
    void set_row(int row);
    void set_col(int col);
    void set_case_color(QColor color);
    void set_used(bool used, Piece *p=0);
    void set_piece(Piece *p=0);
    void set_team(string team);

    //getter

    int get_row();
    int get_col();
    //destructor
};

#endif // CASE_H
