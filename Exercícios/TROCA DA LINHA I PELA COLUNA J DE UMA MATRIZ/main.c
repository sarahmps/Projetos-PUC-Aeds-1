#include <stdio.h>
#include <stdlib.h>

void lerValores(int max, float M[][max])
{
    for(int i = 0; i < max; i++)
    {
        for(int j = 0; j < max; j++)
        {
            printf("\nDigite um valor real qualquer: ");
            scanf("%f", &M[i][j]);
        }
    }
}

void escreveMatriz(int max, float M[][max])
{
    for(int i = 0; i < max; i++)
    {
        for(int j = 0; j < max; j++)
        {
            printf("\t M[%i][%i] = %.2f", i, j, M[i][j]);
        }
        printf("\n");
    }
}

int lerLinhaTrocada(int max)
{
    int i;
    do{
        printf("\nDigite a linha a ser trocada: ");
        scanf("%d", &i);
        if(i < 0 || i >= max)
        {
            printf("\n\aValor invalido!\n");
        }
    }while(i < 0 || i >= max);
    return i;
}

int lerColunaTrocada(int max)
{
    int j;
    do{
        printf("\nDigite a coluna a ser trocada: ");
        scanf("%d", &j);
        if(j < 0 || j >= max)
        {
            printf("\n\aValor invalido!\n");
        }
    }while(j < 0 || j >= max);
    return j;
}

void troca(int max, float M[][max], int i, int j)
{
    float linha[max];

    for(int k = 0; k < max; k++)
    {
        linha[k] = M[i][k];
    }

    for(int k = 0; k < max; k++)
    {
        M[k][j] = linha[k];
    }
}

int main()
{
    printf("\n\tProduto De Duas Matrizes Reais\n");

    int max= 2;

    float M[max][max];
    printf("\nLendo a primeira matriz:\n");
    lerValores(max, M);

    printf("\nA Matriz:\n");
    escreveMatriz(max, M);

    int i = lerLinhaTrocada(max);
    int j = lerColunaTrocada(max);

    troca(max, M, i, j);
    printf("\nA matrix trocada:\n");
    escreveMatriz(max, M);
    return 0;
}
