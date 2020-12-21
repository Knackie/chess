#include "case.h"



Case::Case(QGraphicsItem *parent):QGraphicsRectItem(parent)
{
    setRect(0,0,100,100);
    brush.setStyle(Qt::Dense1Pattern);
    is_used = false;
    piece_color = "";
    piece_name = "";

}

void Case::set_row(int row)
{
    this->row = row;
}
void Case::set_col(int col)
{
    this->col = col;
}

void Case::set_case_color(QColor color)
{
    this->brush.setColor(color);
    setBrush(color);

}

int Case::get_row()
{
    return(row);
}
int Case::get_col()
{
    return (col);
}
