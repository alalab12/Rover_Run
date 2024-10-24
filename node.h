//
// Created by audel on 24/10/2024.
//

#ifndef UNTITLED1_NODE_H
#define UNTITLED1_NODE_H

#include <stdlib.h>
#include "loc.h"

typedef struct Node {
    t_localisation  localisation; //prend en compte la position initial de Marc ainsi que son orientation (N,S,E,W)
    int cost;         // Coût jusqu'a présent
    struct Node* children[9]; // Enfants
} Node;

Node* innit_racine(t_localisation  localisation, int cost_initial);







#endif //UNTITLED1_NODE_H
