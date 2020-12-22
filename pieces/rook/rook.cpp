#include "rook.h"

Rook::Rook(string team, QGraphicsItem *parent) : Piece(team,parent)
{
    set_image();
}
void Rook::available_movements()
{

}
void Rook::set_image()
{
    string path = "/images/";
    path= path + game->get_theme()+ "/";

    if(team == "white")
    {
       path+="Rook_white.png";
    }
        else
    {
        path+="Rook_black.png";
    }
    QString qpath = QString::fromStdString(path);
        setPixmap(qpath);
}
