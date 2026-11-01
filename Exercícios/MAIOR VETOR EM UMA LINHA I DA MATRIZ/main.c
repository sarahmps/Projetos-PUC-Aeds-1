#include <stdio.h>
#include <stdlib.h>

void lerValores(int ml, int mc, float m[][mc])
{
    for(int i = 0; i < ml; i++)
    {
        for( int j = 0; j < mc; j++)
        {
            printf("\nDigite um valor real qualquer: ");
            scanf("%f", &m[i][j]);
        }
    }
}

void escreverValores(int ml, int mc, float m[][mc])
{
    for(int i = 0; i < ml; i++)
    {
        for(int j = 0; j < mc; j++)
        {
            printf("\tM[%d][%d] = %.2f", i, j, m[i][j]);
        }
        printf("\n");
    }
}

int lerChave(int ml)
{
    int chave;
    do{
        printf("\nDigite a linha que gostaria de verificar[0, %i]: ", ml - 1);
        scanf("%d", &chave);
        if(chave < 0 || chave >= ml){
            printf("\n\aLinha Invalida!\n");
        }
    }while(chave < 0 || chave >= ml);
    return chave;
}

float maiorValorLinha(int mc, float m[][mc], int i)
{
    float maior = m[i][0];
    for(int j = 1; j < mc; j++)
    {
        if(m[i][j] > maior)
        {
            maior = m[i][j];
        }
    }
    return maior;
}

int main()
{
    printf("\n\tMaior valor encontrado em uma linha i da matriz\n\n");

    int ml = 3;
    int mc = 3;

    float m[ml][mc];
    lerValores(ml, mc, m);
    escreverValores(ml, mc, m);

    int i = lerChave(ml);
    float maior = maiorValorLinha(mc, m, i);

    printf("\nO maior valor da linha %d = %.2f.\n", i, maior);
    return 0;
}
