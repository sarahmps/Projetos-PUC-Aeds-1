#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int lerTamanho()
{
    int TAM;
    do{
        printf("\nDigite o número de intervalos a serem monitorados: ");
        scanf("%d", &TAM);
        if(TAM <= 0){
            printf("\n\aValor inválido!\n");
        }
    }while(TAM <= 0);
}

void lerValores(float v[], int TAM)
{
    for(int i = 0; i < TAM; i++)
    {
        printf("\nDigite o valor do tempo do intervalo: ");
        scanf("%f", &v[i]);
    }
}

int numElevados(float v[], int TAM)
{
    int elevado = 0;
    for(int i = 1; i < TAM; i++)
    {
        if(v[i] > v[i - 1])
        {
            elevado++;
        }
    }
    return elevado;
}

int main()
{
    setlocale(LC_ALL, "");
    printf("\n\tIntervalos Com Consumo Elevado\n\n");
    printf("\nUm laboratório monitora o consumo de energia de um equipamento durante vários intervalos de tempo.\nUm intervalo é considerado de consumo elevado quando seu valor é estritamente maior que o consumo\nregistrado no intervalo imediatamente anterior.\n");
    int TAM = lerTamanho();
    float v[TAM];
    lerValores(v, TAM);
    int elevado = numElevados(v, TAM);
    printf("\nForam registrados %d intervalos com consumo elevado!\n", elevado);
    return 0;
}
