#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int lerTamanho()
{
    int TAM;
    do{
        printf("\nDigite o tamanho do vetor: ");
        scanf("%d", &TAM);
        if(TAM <= 0){
            printf("\n\aValor inválido!\n");
        }
    }while(TAM <= 0);
    return TAM;
}

void lerValores(int v[], int TAM)
{
    for(int i = 0; i < TAM; i++)
    {
        printf("\nDigite um valor inteiro qualquer: ");
        scanf("%d", &v[i]);
    }
}

void escreveInvertido(int v[], int TAM)
{
    printf("\nO vetor na ordem invertida é:\n");
    for(int i = (TAM - 1); i >= 0; i--)
    {
        printf("%d, ", v[i]);
    }
}

int main()
{
    setlocale(LC_ALL, "");
    printf("\n\tVetor de Inteiros Invertido\n\n");
    int TAM = lerTamanho();
    int v[TAM];
    lerValores(v, TAM);
    escreveInvertido(v, TAM);
    return 0;
}
