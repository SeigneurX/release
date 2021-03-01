#ifndef __ANIMAUX_H__
#define __ANIMAUX_H__
#include <iostream>
#include "diete.h"

class animaux
{
protected:
    std::string nom;
    float poids;

public:
    animaux(std::string le_nom, float le_poids);
    virtual ~animaux();
    virtual std::string getNom();
    virtual float getPoids();
    virtual void afficher();
    virtual diete mon_diete() = 0;
};

#endif