#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

const int ml = 2;
const int mc = 4;

void lerValores(float m[][mc])
{
    for(int i = 0; i < ml; i++)
    {
        for(int j = 0; j < mc; j++)
        {
            printf("\nDigite um valor real qualquer: ");
            scanf("%f", &m[i][j]);
        }
    }
}

void escreveMatriz(float m[][mc])
{
    printf("\nMatriz:\n");
    for(int i = 0; i < ml; i++)
    {
        for(int j = 0; j < mc; j++)
        {
            printf("\tM[%i][%i] = %.2f", i, j, m[i][j]);
        }
        printf("\n");
    }
}

bool estaPresente(float m[][mc])
{
    bool presente = false;
    int i = 0;
    while(!presente && i < ml)
    {
        int j = 0;
        while(!presente && j < mc)
        {
            if(m[i][j] == 0)
            {
                presente = true;
            }
            j++;
        }
        i++;
    }
    return presente;
}

int main()
{
    printf("\n\tVerificando Se Ha Algum Elemento Igual A Zero Em Uma Matriz De Reais\n");

    float m[ml][mc];
    lerValores(m);
    escreveMatriz(m);

    if(estaPresente(m)){
        printf("\nO valor 0 esta presente na matriz.\n");
    }else{
        printf("\nNao existe valor igual a zero na matriz.\n");
    }
    return 0;
}
