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

float diferencaDiagonal(int ml, int mc, float m[][mc])
{
    float mAcima = m[0][1];
    float mAbaixo = m[1][0];

    for(int i = 0; i < ml; i++)
    {
        for(int j = 0; j < mc; j++)
        {
            if(m[i][j] > mAcima && i < j)
            {
                mAcima = m[i][j];
            }
            if(m[i][j] > mAbaixo && i > j)
            {
                mAbaixo = m[i][j];
            }
        }
    }

    float diferenca = mAcima - mAbaixo;
    return diferenca;
}

int main()
{
    printf("\n\tDiferenca Entre O Maior Valor Presente Acima E Abaixo Da Diagonal Principal De Uma Matriz\n\n");

    int ml = 3;
    int mc = 3;

    float m[ml][mc];
    lerValores(ml, mc, m);
    escreverValores(ml, mc, m);

    float diferenca = diferencaDiagonal(ml, mc, m);

    printf("\nDiferenca = %.2f.\n", diferenca);
    return 0;
}
