#ifndef __TIGRE_H__
#define __TIGRE_H__
#include <iostream>
#include "animaux.h"

class tigres : public animaux
{
public:
    tigres(std::string le_nom, float le_poids);
    ~tigres();

    diete mon_diete();

    void afficher();



};

#endif