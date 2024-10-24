//
// Created by audel on 24/10/2024.
//
#include "node.h"


Node* innit_racine(t_localisation  localisation, int cost_initial)
{
    Node* racine = (Node*) malloc(sizeof (Node));
    racine->localisation = localisation;
    racine->cost = cost_initial;
    for(int i=0; i<9; i++)
    {
        racine->children[i] = NULL;  // Initialisation des 9 enfants
    }
    return racine;
}

