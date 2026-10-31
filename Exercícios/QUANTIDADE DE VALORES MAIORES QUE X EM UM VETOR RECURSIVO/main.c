#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float lerChave()
{
    float x;
    printf("\nDigite o valor de X: ");
    scanf("%f", &x);
    return x;
}

int lerTamanho()
{
    int TAM;
    do{
        printf("\nDigite o número de elementos do vetor: ");
        scanf("%d", &TAM);
        if(TAM <= 0){
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

int numMaiores(float v[], int TAM, float x)
{
    int maiores = 0;
    if(TAM == 1)
    {
        if(v[0] > x)
        {
            maiores++;
        }
    }else{
        if(v[TAM - 1] > x)
        {
            maiores = 1 + numMaiores(v, TAM - 1, x);
        }else{
            maiores = 0 + numMaiores(v, TAM - 1, x);
        }
    }
    return maiores;
}

int main()
{
    setlocale(LC_ALL, "");
    printf("\n\tQuantidade De Elementos Maiores Que X Em Um Vetor\n\n");
    float x = lerChave();
    int TAM = lerTamanho();
    float v[TAM];
    lerValores(v, TAM);
    int maiores = numMaiores(v, TAM, x);
    printf("\nHá %d valores maiores do que X no vetor.\n", maiores);
    return 0;

}
