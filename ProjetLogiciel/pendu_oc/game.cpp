#include "game.h"

game::game()
{
}

QString game::drawPendu(int errors)
{
    switch (errors) {
    case 0:
        return ("../pendu_oc/img/lapin.jpg");
    case 1:
        return ("../pendu_oc/img/lapin.jpg");
    case 2:
        return ("../pendu_oc/img/lapin.jpg");
    case 3:
        return ("../pendu_oc/img/lapin.jpg");
    case 4:
        return ("../pendu_oc/img/lapin.jpg");
    case 5:
        return ("../pendu_oc/img/lapin.jpg");
    case 6:
        return ("../pendu_oc/img/lapin.jpg");
    case 7:
        return ("../pendu_oc/img/lapin.jpg");
    case 8:
        return ("../pendu_oc/img/lapin.jpg");
    case 9:
        return ("../pendu_oc/img/lapin.jpg");
    case 10:
        return ("../pendu_oc/img/lapin.jpg");
    default:
        qDebug() << "That is just not possible";
        break;
    }
}
