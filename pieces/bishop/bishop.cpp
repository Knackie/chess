#include "bishop.h"

bishop::bishop(string team, QGraphicsItem *parent) : Pieces(team,parent)
{

}
void bishop::available_movements()
{

}
void bishop::set_image()
{
    string path = "/images/";
    path= path + game->get_theme()+ "/";

    if(team == "white")
    {
       path+="bishop_white.png";
    }
        else
    {
        path+="bishop_black.png";
    }
    QString qpath = QString::fromStdString(path);
        setPixmap(qpath);
}
