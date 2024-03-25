#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "barbearia.h"

enum Cortes{
    int corte; // 0
    int barba; // 1
    int ambos; // 2
};

struct Cliente{
    char nome[50];
    int idade;
    struct Cortes;
    float valor;
};

int adicionar_cliente(cliente* c, Cortes* e){

int cort;

    printf("Informe seu nome para cadastro: \n");   
        scanf(" %[^\n] ", &c->nome);

    printf("Por gentileza informe a sua idade: \n");
        scanf("%d", &c->idade);
    
    printf("Informe qual o serviço desejado : \n 0.Corte(Cabelos) \n 1.Barba\n 2.Ambos \n");
    printf("Por favor informe o número referente ao serviço desejado.\n");
        scanf("%d",&cort);
    if (cort != 0 || cort != 1 || cort != 2){
            printf("Por favor informar uma das OPÇÕES e nenhuma fora parte!!");

            printf("Informe sua especialidade de corte. \n 0.corte(cabelo)\n1.barba\n2.ambos\n Por favor escolher o n° da frente da opção desejada :");
                scanf("%d",&cort);
        }

        return c->e = cort;
        
}