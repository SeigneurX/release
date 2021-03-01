#include <iostream>
#include "tigres.h"
#include "singe.h"
#include "rhinoceros.h"

int main()
{

    animaux *les_animaux[250];
    int i = 0;
    int limite = 0;
    int choix;
    std::string nom;
    float poids;
    int quantite;
    int enclos;
    float totalViande = 0.0;
    float totalFruits = 0.0;
    float totalHerbe = 0.0;

    do
    {

        std::cout << std::endl;
        std::cout << "=========== MENU ===========" << std::endl;
        std::cout << "1.-Ajouter Tigre." << std::endl;
        std::cout << "2.-Ajouter Singe." << std::endl;
        std::cout << "3.-Ajouter Rhinoceros." << std::endl;
        std::cout << "4.-Afficher le compte-rendu." << std::endl;
        std::cout << "5.-Enlever un animal." << std::endl;
        std::cout << "6.-QUITTER." << std::endl;
        std::cout << std::endl;
        std::cout << "Votre choix: ";
        std::cin >> choix;

        switch (choix)
        {
        case 1:

            std::cout << "Quantite de tigre a ajouter: ";
            std::cin >> quantite;
            limite += quantite;
            for (i; i < limite; i++)
            {
                std::cout << "Nom du tigre: ";
                std::cin >> nom;
                std::cout << "Poids du tigre: ";
                std::cin >> poids;
                les_animaux[i] = new tigres(nom, poids);
                std::cout << std::endl;
                std::cout << "Tigre Ajouter avec success!!!" << std::endl;
                std::cout << std::endl;
            }
            break;

        case 2:
            std::cout << "Quantite de singe a ajouter: ";
            std::cin >> quantite;
            limite += quantite;
            for (i; i < limite; i++)
            {
                std::cout << "Nom du singe: ";
                std::cin >> nom;
                std::cout << "Poids du singe: ";
                std::cin >> poids;
                std::cout << "Avec Herbe [1] / Sans Herbe [0] : ";
                std::cin >> enclos;
                les_animaux[i] = new singe(nom, poids, enclos);
                std::cout << std::endl;
                std::cout << "Singe ajouter avec success!!!" << std::endl;
                std::cout << std::endl;
            }
            break;

        case 3:
            std::cout << "Quantite de Rhinoceros a ajouter: ";
            std::cin >> quantite;
            limite += quantite;
            for (i; i < limite; i++)
            {
                std::cout << "Nom du rhinoceros: ";
                std::cin >> nom;
                std::cout << "Poids du rhinoceros: ";
                std::cin >> poids;
                std::cout << "Enclos en m2: ";
                std::cin >> enclos;
                les_animaux[i] = new rhinoceros(nom, poids, enclos);
                std::cout << std::endl;
                std::cout << "Rhinoceros ajouter avec success!!!" << std::endl;
                std::cout << std::endl;
            };
            break;

        case 4:
            for (int j = 0; j < limite; j++)
            {

                les_animaux[j]->afficher();
                les_animaux[j]->mon_diete().afficherLesDietes();
                totalViande += les_animaux[j]->mon_diete().getViande();
                totalFruits += les_animaux[j]->mon_diete().getFruit();
                totalHerbe += les_animaux[j]->mon_diete().getHerbe();
            }
            std::cout << "Diete quotidienne totale : " << std::endl;
            std::cout << "Viande : " << totalViande << " kg" << std::endl;
            std::cout << "Fruits : " << totalFruits << " kg" << std::endl;
            std::cout << "Herbe  : " << totalHerbe << " kg" << std::endl;

            break;
        case 5:
            std::cout << "Saisir le Nom: " << std::endl; // J’arrive a trouver le nom dans la liste pour faire la comparaison mais je suis pas arriver a l’enlever
            std::cin >> nom;

            for (int j = 0; j < limite; j++)
            {

                if (les_animaux[j]->getNom().compare(nom) != 0)
                {
                    std::cout << "animal n'existe pas" << std::endl;
                }
                else
                {
                    for (int g = j; g < limite; g++)
                    {
                        std::cout << "animal existe" << std::endl;
                    }
                }
            }

            break;
        }

    } while (choix != 6);

    for (int b = 0; b < limite; b++)
    {
        delete les_animaux[b];
    }
}
