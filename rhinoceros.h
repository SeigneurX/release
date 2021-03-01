#ifndef __RHINOCEROS_H__
#define __RHINOCEROS_H__
#include <iostream>
#include "animaux.h"

class rhinoceros : public animaux
{
protected:
    int enclos;

public:
    rhinoceros(std::string le_nom, float le_poids, int un_enclos);
    ~rhinoceros();

    diete mon_diete();
    void afficher();
};


#endif