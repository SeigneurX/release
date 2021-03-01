#include "animaux.h"
#include <iostream>



animaux::animaux(std::string le_nom, float le_poids)
{
    this->nom = le_nom;
    this->poids = le_poids;
}
animaux::~animaux() {}

std::string animaux::getNom()
{
    return this->nom;
}

float animaux::getPoids()
{
    return this->poids = poids;
}

void animaux::afficher() {}
