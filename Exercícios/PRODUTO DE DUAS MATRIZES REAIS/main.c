#include <stdio.h>
#include <stdlib.h>

void lerValores(int maxLin, int maxCol, float M[][maxCol])
{
    for(int i = 0; i < maxLin; i++)
    {
        for(int j = 0; j < maxCol; j++)
        {
            printf("\nDigite um valor real qualquer: ");
            scanf("%f", &M[i][j]);
        }
    }
}

void produtoMatrizes(int maxLin, int maxCol, int maxCol2, float M1[][maxCol], float M2[][maxCol2], float M3[][maxCol2])
{
    for(int i = 0; i < maxLin; i++)
    {
        for(int j = 0; j < maxCol2; j++)
        {
            M3[i][j] = 0;
            for(int k = 0; k < maxCol; k++)
            {
                M3[i][j] += M1[i][k] * M2[k][j];
            }
        }
    }
}

void escreveMatriz(int maxLin, int maxCol, float M[][maxCol])
{
    for(int i = 0; i < maxLin; i++)
    {
        for(int j = 0; j < maxCol; j++)
        {
            printf("\t M[%i][%i] = %.2f", i, j, M[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    printf("\n\tProduto De Duas Matrizes Reais\n");

    int maxLin = 2;
    int maxCol = 3;
    int maxColM2 = 4;

    float M1[maxLin][maxCol];
    printf("\nLendo a primeira matriz:\n");
    lerValores(maxLin, maxCol, M1);

    float M2[maxCol][maxColM2];
    printf("\nLendo a segunda matriz:\n");
    lerValores(maxCol, maxColM2, M2);

    float M3[maxLin][maxColM2];
    produtoMatrizes(maxLin, maxCol, maxColM2, M1, M2, M3);

    printf("\nO produto das raizes:\n");
    escreveMatriz(maxLin, maxColM2, M3);
    return 0;
}
