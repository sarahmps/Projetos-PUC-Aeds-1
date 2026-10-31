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

void inverteValores(int v[], int TAM, int i)
{
    int aux;
    if(i < TAM - 1)
    {
        aux = v[i];
        v[i] = v[TAM - 1];
        v[TAM - 1] = aux;
        inverteValores(v, TAM - 1, i + 1);
    }
}

void escreveVetor(int v[], int TAM)
{
    for(int i = 0; i < TAM; i++)
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
    int i = 0;
    inverteValores(v, TAM, i);
    printf("\nO vetor de forma invertida:\n\n");
    escreveVetor(v, TAM);
    printf("\n");
    return 0;
}
