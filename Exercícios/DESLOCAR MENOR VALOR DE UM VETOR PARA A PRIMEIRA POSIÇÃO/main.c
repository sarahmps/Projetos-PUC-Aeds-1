#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void definirValores(float arranjo[], int num)
{
    printf("\nDefinição dos Valores do Arranjo:\n");
    for(int i = 0; i < num; i++)
    {
        printf("\nDigite um número real qualquer: ");
        scanf("%f", &arranjo[i]);
    }
}

void trocaValores(float arranjo[], int num)
{
    int soma = 0;
    for(int i = 0; i < num; i++)
    {
        soma += arranjo[i];
    }
    int menor = soma;
    for(int j = 0; j < num; j++)
    {
        if(arranjo[j] < menor)
        {
            menor = arranjo[j];
        }
    }
    for(int k = 0; k < num; k++)
    {
        if(arranjo[k] == menor){
            arranjo[k] = arranjo[0];
        }
    }
    arranjo[0] = menor;
}

void escreveValores(float arranjo[], int num)
{
    printf("\nA nova sequência de valores do arranjo é:\n");
    for(int i = 0; i < num; i++)
    {
        printf("%f ", arranjo[i]);
    }
}

int main()
{
    setlocale(LC_ALL, "");
    printf("\n\tDeslocamento Do Menor Valor De Um Arranjo Para A Primeira Posição\n\n");
    int num;
    printf("\nDigite o número de posições do arranjo: ");
    scanf("%d", &num);
    float arranjo[num];
    definirValores(arranjo, num);
    trocaValores(arranjo, num);
    escreveValores(arranjo, num);
    return 0;
}
