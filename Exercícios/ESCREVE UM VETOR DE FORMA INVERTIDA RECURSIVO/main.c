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
    if(TAM == 1)
    {
        printf("%d.\n", v[0]);
    }else{
        printf("%d, ", v[TAM - 1]);
        escreveInvertido(v, TAM - 1);
    }
}

int main()
{
    setlocale(LC_ALL, "");
    printf("\n\tVetor de Inteiros Invertido\n\n");
    int TAM = lerTamanho();
    int v[TAM];
    lerValores(v, TAM);
    printf("\nO vetor na ordem invertida é:\n");
    escreveInvertido(v, TAM);
    return 0;
}
