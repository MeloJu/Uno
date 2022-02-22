#include <stdio.h>
#include <stdlib.h>


int distribui()
{




}

int compara
{




}

int main()
{
    char nome_jogador1[40];
    char nome_jogador2[40];
    char nome_jogador3[40];
    char nome_jogador4[40];
    printf("Bem vindo ao UNO!\nPara começar selecione o número de jogadores\n");
    printf("2, 3 ou 4");
    int qtd;
    scanf("%d", &qtd);
    
    if(qtd >= 2)
    {
        printf("Digite o nome do primeiro jogador\n");
        gets(nome_jogador1);
        printf("Digite o nome do segundo jogador\n");
        gets(nome_jogador2);
        if(qtd >= 3)
        {
            printf("Digite o nome do terceiro jogador\n");
            gets(nome_jogador3);

            if(qtd == 4)
            {
                printf("Digite o nome do terceiro jogador\n");
                gets(nome_jogador3);
            }

        }


    }








}