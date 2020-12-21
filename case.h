#ifndef CASE_H
#define CASE_H
#include <QGraphicsRectItem>
#include <QBrush>
#include "pieces.h"
class Piece;
class Case : public QGraphicsRectItem
{
private:
    QBrush brush;
    bool is_used;
    string piece_name, piece_color;
    int row, col;
public:
    //constructor
    Case(QGraphicsItem *parent = 0);
    //methods

    //setter
    void set_row(int row);
    void set_col(int col);
    void set_case_color(QColor color);

    //getter

    int get_row();
    int get_col();
    //destructor
};

#endif // CASE_H
