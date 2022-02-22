#include <stdio.h>
#include <stdlib.h>
#include <listacircularlib.h>
//lib de pilha

#define MAX_PILHA 63

typedef struct pilha
{
    carta baralho[MAX_PILHA];
    int qtd;
}pilha;


//criar pilha
pilha CriaPilha()
{
    pilha resp;
    resp.qtd = 0;
    return resp;
}

//empilhar
int empilha (pilha *p, carta card)
{
    if(p->qtd==MAX_PILHA)
        return 0;
    
    p->baralho[p->qtd] = card;
    p->qtd++;
    return 1;
}

//desempilhar
int desempilha(pilha *p, carta *card)
{
    if(p->qtd==0)
        return 0;

    p->qtd--;
    *card = p->baralho[p->qtd];
    return 1;
}

