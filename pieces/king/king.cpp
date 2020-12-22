#include "king.h"

King::King(string team, QGraphicsItem *parent) : Pieces(team,parent)
{

}
void King::available_movements()
{

}
void King::set_image()
{
    string path = "/images/";
    path= path + game->get_theme()+ "/";

    if(team == "white")
    {
       path+="king_white.png";
    }
        else
    {
        path+="king_black.png";
    }
    QString qpath = QString::fromStdString(path);
        setPixmap(qpath);
}
