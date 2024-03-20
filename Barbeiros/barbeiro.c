#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "barbearia.h"

enum Especialidade{
    corte,
    barba,
    ambos
};
struct Barbeiro{
    char nome[50];
    enum Especialidade* e;
    struct cliente;
};

 Cadastro(Barbeiro* b, Especialidade* e){
    int i = 1; 
    int qnt = 0;
    int cort;

    while(i = 1){
        int c = 1;
        printf("Informe o nome do %d° barbeiro\n", c);
            scanf("%[^\n]", &b.nome);
        printf("Informe sua especialidade de corte. \n 0.corte(cabelo)\n1.barba\n2.ambos\n Porfavor escolher o n° da frente da opção desejada :");
            scanf("%d",cort);

        if (cort != 0 || cort != 1 || cort != 2){
            printf("Porfavor informar uma das OPÇÕES e nenhuma fora parte!!");

            printf("Informe sua especialidade de corte. \n 0.corte(cabelo)\n1.barba\n2.ambos\n Porfavor escolher o n° da frente da opção desejada :");
            scanf("%d",cort);
        }
        b.e = cort;

        printf("Deseja cadastrar outro barbeiro?\n 1.sim \n (qualquer número para não) \n");
            scanf("%d", i);

    }
 }