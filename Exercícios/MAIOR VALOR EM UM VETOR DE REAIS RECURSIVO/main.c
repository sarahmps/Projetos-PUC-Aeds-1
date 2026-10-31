#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int lerTamanho()
{
    int TAM;
    do{
        printf("\nDigite o tamanho do vetor: ");
        scanf("%d", &TAM);
        if(TAM <= 0)
        {
            printf("\n\aValor inválido!\n");
        }
    }while(TAM <= 0);
    return TAM;
}

void lerValores(float v[], int TAM)
{
    for(int i = 0; i < TAM; i++)
    {
        printf("\nDigite um valor real qualquer: ");
        scanf("%f", &v[i]);
    }
}

float maiorValor(float v[], int TAM)
{
    float maior;
    if(TAM == 1)//caso base
    {
        maior = v[0];
    }else{
        maior = maiorValor(v, TAM - 1);
        if(v[TAM - 1] > maior)
        {
            maior = v[TAM - 1];
        }
    }
    return maior;
}

int main()
{
    setlocale(LC_ALL, "");
    printf("\n\tMaior Valor Em Um Vetor\n\n");
    int TAM = lerTamanho();
    float v[TAM];
    lerValores(v, TAM);
    float maior = maiorValor(v, TAM);
    printf("\nO maior valor do vetor é: %f.\n", maior);
    return 0;
}
