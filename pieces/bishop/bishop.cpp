#include "bishop.h"

Bishop::Bishop(string team, QGraphicsItem *parent) : Piece(team,parent)
{
set_image();
}
void Bishop::available_movements()
{

}
void Bishop::set_image()
{
   /* string path = ":/images/";
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
        std::printf(path.c_str());*/
        setPixmap(QPixmap(":bishop1.png"));
}
