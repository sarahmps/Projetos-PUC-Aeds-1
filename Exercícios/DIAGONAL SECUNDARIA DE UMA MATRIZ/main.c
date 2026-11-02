#include <stdio.h>
#include <stdlib.h>

int lerDimensoesMatriz()
{
    int max;
    do{
        printf("\nDigite o numero de linhas e colunas da matriz quadrada: ");
        scanf("%d", &max);
        if(max <= 0)
        {
            printf("\n\aValor invalido!\n");
        }
    }while(max <= 0);
    return max;
}

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

void escreveDiagonal(int max, float M[][max])
{
    for(int i = 0; i < max; i++)
    {
        for(int j = 0; j < max; j++)
        {
            if(i + j == (max - 1))
            {
                printf("\t M[%i][%i] = %.2f", i, j, M[i][j]);
            }
        }
        printf("\n");
    }
}

int main()
{
    printf("\n\tDiagonal Secundaria De Uma Matriz Quadrada\n");

    int max = lerDimensoesMatriz();

    float M[max][max];
    printf("\nLendo a matriz:\n");
    lerValores(max, M);

    printf("\nMatriz:\n");
    escreveMatriz(max, M);

    printf("\nA diagonal secundaria da matriz:\n");
    escreveDiagonal(max, M);
    return 0;
}
