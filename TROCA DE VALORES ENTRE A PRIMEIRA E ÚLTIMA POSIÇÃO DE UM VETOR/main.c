#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void valoresVetor(float vetor[], int num)
{
    for(int i = 0; i < num; i++)
    {
        printf("\nDigite um número real qualquer: ");
        scanf("%f", &vetor[i]);
    }
}

void trocaValores(float vetor[], int num)
{
    float aux = vetor[0];
    vetor[0] = vetor[num - 1];
    vetor[num - 1] = aux;
}

void escreveValores(float vetor[], int num)
{
    for(int i = 0; i < num; i++)
    {
        printf("%f ", vetor[i]);
    }
}

int main()
{
    setlocale(LC_ALL, "");
    printf("\n\tTroca De Valores Entre A Primeira E Última Posição\n\n");
    int num;
    printf("\nDigite o número de posições do vetor: ");
    scanf("%d", &num);
    float vetor[num];
    valoresVetor(vetor, num);
    trocaValores(vetor, num);
    escreveValores(vetor, num);
    printf("\n");
    return 0;
}
