#include "singe.h"

singe::singe(std::string le_nom, float le_poids, bool enclos) : animaux(le_nom, le_poids)
{
    this->enclos = enclos;
}

singe::~singe() {}

diete singe::mon_diete()
{
    float viande = 0;
    float fruit = 0;
    float herbe = 0;

    viande = 0.01 * this->poids;
    fruit = 0.01 * this->poids;

    if (this->enclos == true)
    {
        herbe = 0;
    }
    else
    {
        herbe = 0.005 * this->poids;
    }

    diete le_singe = diete(viande, fruit, herbe);
    return le_singe;
}

void singe::afficher()
{
    std::cout << "Singe : " << this->getNom() << " (" << this->getPoids() << " kg)" << std::endl;
    if (enclos == 1)
        std::cout << "  Enclos avec herbe" << std::endl;
    else
        std::cout << "  Enclos sans herbe" << std::endl;
}
