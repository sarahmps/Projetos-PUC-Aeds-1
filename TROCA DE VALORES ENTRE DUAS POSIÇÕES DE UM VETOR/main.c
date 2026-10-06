#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void defineValores(float vetor[], int num)
{
    printf("\n\tDefinição Dos Valores\n\n");
    for(int i = 0; i < num; i++)
    {
        printf("\nDigite um número real qualquer: ");
        scanf("%f", &vetor[i]);
    }
}

void trocaValores(float vetor[], int num)
{
    printf("\n\tTroca De Valores\n\n");
    int a;
    int b;
    do{
        printf("\nDigite a primeira posição da troca[0 a num - 1]: ");
        scanf("%d", &a);
        if(a < 0 || a >= num){
            printf("\n\aValor inválido!\n");
        }
    }while(a < 0 || a >= num);
    do{
        printf("\nDigite a segunda posição da troca[0 a num - 1]: ");
        scanf("%d", &b);
        if(b < 0 || b >= num){
            printf("\n\aValor inválido!\n");
        }
    }while(b < 0 || b >= num);
    int aux = vetor[a];
    vetor[a] = vetor[b];
    vetor[b] = aux;
}

void escreveValores(float vetor[], int num)
{
    for(int i =  0; i < num; i++)
    {
        printf("%f, ", vetor[i]);
    }
}

int main()
{
    setlocale(LC_ALL, "");
    printf("\n\tTroca De Valores Entre Duas Posições De Um Vetor\n\n");
    int num;
    printf("\nDigite o número de posições do vetor: ");
    scanf("%d", &num);
    float vetor[num];
    defineValores(vetor, num);
    trocaValores(vetor, num);
    escreveValores(vetor, num);
    printf("\n");
    return 0;
}
