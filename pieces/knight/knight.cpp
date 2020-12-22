#include "knight.h"

Knight::Knight(string team, QGraphicsItem *parent) : Pieces(team,parent)
{

}
void Knight::available_movements()
{

}
void Knight::set_image()
{
    string path = "/images/";
    path= path + game->get_theme()+ "/";

    if(team == "white")
    {
       path+="knight_white.png";
    }
        else
    {
        path+="knight_black.png";
    }
    QString qpath = QString::fromStdString(path);
        setPixmap(qpath);
}
