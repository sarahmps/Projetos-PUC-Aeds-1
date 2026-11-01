#include <stdio.h>
#include <stdlib.h>

void leMatriz(int MAX_LIN, int MAX_COL, float M[][MAX_COL])
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

void escreveMatriz(int MAX_LIN, int MAX_COL, float M[][MAX_COL])
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

void copiaTransposta(int MAX_LIN, int MAX_COL, float M1[][MAX_COL], float M2[][MAX_LIN])
{
    for(int i = 0; i < MAX_LIN; i++)
    {
        for(int j = 0; j < MAX_COL; j++)
        {
            M2[j][i] = M1[i][j];
        }
    }
}

int main()
{
    printf("\n\tCopia da matriz transposta de m1 em m2\n");

    int linM1 = 2;
    int colM1 = 3;

    float M1[linM1][colM1];
    printf("\n\nLendo a Matriz:\n");
    leMatriz(linM1, colM1, M1);

    printf("\n\nEscrevendo a Matriz M1:\n");
    escreveMatriz(linM1, colM1, M1);

    float M2[colM1][linM1];
    copiaTransposta(linM1, colM1, M1, M2);

    printf("\n\nEscrevendo a Matriz Transposta de M1:\n");
    escreveMatriz(colM1, linM1, M2);
    return 0;
}
