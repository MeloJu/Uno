#include <stdio.h>
#include <stdlib.h>

//Biblioteca para lista circular

typedef struct carta
{
    int numero;
    char cor[10];
    struct carta *ant;
    struct carta *prox;
}carta;


int tamanho(carta *lista)
{
    int n = 0;

    carta *j = lista->ant;

    for(carta *k = lista; k!=j; k=k->prox)
        {

            n++;

        }

    n++;

    return n;
}

//destruindo a lista
void destruirlista(carta *lista)
{

    int contador = 0;
    int n = tamanho(lista);   
    carta *t;
    carta *p = lista;
    
    while (contador <= n)
    {
        t = p->prox; 
        free(p); 
        p = t; 
        contador++;
    }

}

//criando a lista
carta *CriaLista()
{
    return NULL;

}

//criando o elemento
carta *CriaElemento(int numero)
{
    carta *novo = (carta*)malloc(sizeof(carta));
    novo->numero = numero;
    novo->prox = NULL;
    novo->ant = NULL;
    return novo;
}



//colocar no inicio
carta *inserinicio(carta *lista, int numero)
{
    carta *novo = CriaElemento(numero);
    if(lista == NULL)
    {
        novo->prox = novo;
        novo->ant = novo;
    }
    else
    {
        novo->prox = lista;
        novo->ant = lista -> ant;
        lista->ant->prox = novo;
        lista->ant = novo;   

    }


    lista = novo;
    return lista;
}

