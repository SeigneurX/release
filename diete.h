#ifndef __DIETE_H__
#define __DIETE_H__
#include <iostream>

class diete
{
protected:
    float viande;
    float fruit;
    float herbe;

public:
    diete(float la_viande, float un_fruit, float une_herbe);
    ~diete();

    float getViande();
    float getFruit();
    float getHerbe();

    void afficherLesDietes();
};

#endif
