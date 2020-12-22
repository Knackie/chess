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
    this->brush.setColor(QColor(120,60,55));
    setBrush(color);

}
void Case::set_piece(Piece *piece)
{

    piece->setPos(x()+50- piece->pixmap().width()/2  ,y()+50-piece->pixmap().width()/2);
    piece->set_case(this);
    set_used(true,piece);
    on = piece;


}

void Case::set_used(bool used, Piece *p)
{
    this->is_used = used;
    if(is_used)
    {
        set_team(p->get_team());
    }
    else
    {
        set_team("");
    }
}

void Case::set_team(string team)
{
    this->piece_color = team;
}
int Case::get_row()
{
    return(row);
}
int Case::get_col()
{
    return (col);
}
