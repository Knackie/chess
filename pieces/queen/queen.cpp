#include "queen.h"

Queen::Queen(string team, QGraphicsItem *parent) : Piece(team,parent)
{
set_image();
}
void Queen::available_movements()
{

}
void Queen::set_image()
{
    string path = "/images/";
    path= path + game->get_theme()+ "/";

    if(team == "white")
    {
       path+="Queen_white.png";
    }
        else
    {
        path+="Queen_black.png";
    }
    QString qpath = QString::fromStdString(path);
        setPixmap(qpath);
}
