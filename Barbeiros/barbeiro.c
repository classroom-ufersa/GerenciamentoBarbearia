#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "barbearia.h"

struct Especialidade{
    int corte;
    int barba;
    int ambos;
};
struct barbeiro{
    char nome[50];
    struct Especialidade corte;
    struct cliente nome;

};