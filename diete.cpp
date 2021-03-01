#include "diete.h"

diete::diete(float la_viande, float un_fruit, float une_herbe)
{
    this->viande = la_viande;
    this->fruit = un_fruit;
    this->herbe = une_herbe;
}

float diete::getViande()
{
    return this->viande;
}

float diete::getFruit()
{
    return this->fruit;
}

float diete::getHerbe()
{
    return this->herbe;
}

void diete::afficherLesDietes()
{
    std::cout << "  " << this->viande << " kg de viande par jour" << std::endl;
    std::cout << "  " << this->fruit << " kg de fruits par jour" << std::endl;
    std::cout << "  " << this->herbe << " kg d'herbe par jour" << std::endl;
}

diete::~diete()
{
}
