#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void definirValores(float arranjo[], int num)
{
    for(int i = 0; i < num; i++)
    {
        printf("\nDigite um número real qualquer: ");
        scanf("%f", &arranjo[i]);
    }
}

void trocaValores(float arranjo[], int num)
{
    float maior = 0;
    for(int i = 0; i < num; i++)
    {
        if(arranjo[i] > maior){
            maior = arranjo[i];
        }
    }
    for(int j = 0; j < num; j++)
    {
        if(arranjo[j] == maior)
        {
            arranjo[j] = arranjo[num - 1];
        }
    }
    arranjo[num - 1] = maior;
}

void escreveValores(float arranjo[], int num)
{
    printf("\nA nova sequência do arranjo é:\n");
    for(int i = 0; i < num; i++)
    {
        printf("%f, ", arranjo[i]);
    }
}

int main()
{
    setlocale(LC_ALL, "");
    printf("\n\tDeslocamento Do Maior Valor Para A Última Posição Do Arranjo\n\n");
    int num;
    printf("\nDigite o número de posições do arranjo: ");
    scanf("%d", &num);
    float arranjo[num];
    definirValores(arranjo, num);
    trocaValores(arranjo, num);
    escreveValores(arranjo, num);
    printf("\n");
    return 0;
}
