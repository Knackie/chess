#include "pawn.h"

Pawn::Pawn(string team, QGraphicsItem *parent) : Pieces(team,parent)
{

}
void Pawn::available_movements()
{

}
void Pawn::set_image()
{
    string path = "/images/";
    path= path + game->get_theme()+ "/";

    if(team == "white")
    {
       path+="pawn_white.png";
    }
        else
    {
        path+="pawn_black.png";
    }
    QString qpath = QString::fromStdString(path);
        setPixmap(qpath);
}
