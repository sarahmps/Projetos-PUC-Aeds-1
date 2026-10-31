#include <stdio.h>
#include <stdlib.h>

const int MAX_LIN = 3;
const int MAX_COL = 2;

void leMatriz(float M[][MAX_COL])
{
    for(int i = 0; i < MAX_LIN; i++)
    {
        for(int j = 0; j < MAX_COL; j++)
        {
            printf("\nDigite um valor real qualquer: ");
            scanf("%f", &M[i][j]);
        }
    }
}

void escreveMatriz(float M[][MAX_COL])
{
    for(int i = 0; i < MAX_LIN; i++)
    {
        for(int j = 0; j < MAX_COL; j++)
        {
            printf( "\tM[%i][%i]= %f ", i , j , M[i][j]);
        }
        printf("\n");
    }
}

void copiaMatriz(float M1[][MAX_COL], float M2[][MAX_COL])
{
    for(int i = 0; i < MAX_LIN; i++)
    {
        for(int j = 0; j < MAX_COL; j++)
        {
            M2[i][j] = M1[i][j];
        }
    }
}

int main()
{
    printf("\n\tCopia de uma matriz em outra matriz\n");

    float M1[MAX_LIN][MAX_COL];
    printf("\n\nLendo a primeira Matriz:\n");
    leMatriz(M1);

    printf("\n\nEscrevendo a Matriz:\n");
    escreveMatriz(M1);

    float M2[MAX_LIN][MAX_COL];
    copiaMatriz(M1, M2);

    printf("\n\nEscrevendo a Matriz cópia:\n");
    escreveMatriz(M2);
    return 0;
}
