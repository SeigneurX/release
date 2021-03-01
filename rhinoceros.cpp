#include "rhinoceros.h"

rhinoceros::rhinoceros(std::string le_nom, float le_poids, int un_enclos) : animaux(le_nom, le_poids)
{
    this->enclos = un_enclos;

    if (this->enclos < 2000)
    {
        this->enclos = 2000;
    }
}

rhinoceros::~rhinoceros() {}

diete rhinoceros::mon_diete()
{

    float fruit = 0.005 * this->poids;
    float herbe = 0;

    float herbe_Besoin = this->poids * 0.02;

    float herbe_Fourni = this->enclos / 1000 * 10;

    if (herbe_Besoin < herbe_Fourni)
    {
        herbe = 0;
    }
    else
    {
        herbe = herbe_Besoin - herbe_Fourni;
    }

    diete le_rhinoceros = diete(0, fruit, herbe);
    return le_rhinoceros;
}

void rhinoceros::afficher()
{
    std::cout << "Rhinoceros : " << this->getNom() << " (" << this->getPoids() << " kg)" << std::endl;
    std::cout << "  Enclos de " << this->enclos << " metres-carres" << std::endl;
}
