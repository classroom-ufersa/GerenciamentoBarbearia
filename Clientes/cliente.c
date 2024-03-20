#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "barbearia.h"

enum Cortes{
    int corte;
    int barba;
    int ambos;
};

struct cliente{
    char nome[50];
    int idade;
    struct Cortes;
    float valor;
};