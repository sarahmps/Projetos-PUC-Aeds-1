#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void definirValores(float v[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("\nDigite um número real qualquer: ");
        scanf("%f", &v[i]);
    }
}

void ordenar(float v[], int n)
{
    float aux;
    for(int j = 1; j < n; j++)
    {
        for(int i = 0; i < n - j; i++)
        {
            if(v[i] > v[i + 1])
            {
                aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
            }
        }
    }
}

int main()
{
    setlocale(LC_ALL, "");
    printf("\n\tOrdenando Um Arranjo Em Ordem Crescente\n\n");
    int n;
    do{
        printf("\nDigite o número de posições do arranjo: ");
        scanf("%d", &n);
        if(n <= 0){
            printf("\n\aValor inválido!\n");
        }
    }while(n <= 0);
    float v[n];
    definirValores(v, n);
    ordenar(v, n);
    printf("\nA nova ordem é:\n");
    for(int i = 0; i < n - 1; i++)
    {
        printf("%f, ", v[i]);
    }
    printf("%f\n", v[n - 1]);
    return 0;
}
