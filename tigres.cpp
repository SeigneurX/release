#include "tigres.h"

tigres::tigres(std::string le_nom, float le_poids) : animaux(le_nom, le_poids) {}

tigres::~tigres()
{
    std::cout << "detruit" << std::endl;
}

diete tigres::mon_diete()
{
    float viande = 0;
    viande = 0.05 * this->poids;
    diete le_tigre = diete(viande, 0, 0);
    return le_tigre;
}

void tigres::afficher()
{
    std::cout << "Tigre : " << this->getNom() << " (" << this->getPoids() << " kg)" << std::endl;
}
