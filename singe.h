#ifndef __SINGE_H__
#define __SINGE_H__
#include <iostream>
#include "animaux.h"

class singe : public animaux
{
private:
    bool enclos;
public:
    singe(std::string le_nom, float le_poids, bool enclos);
    ~singe();

    diete mon_diete ();
    
    void afficher();
};


#endif