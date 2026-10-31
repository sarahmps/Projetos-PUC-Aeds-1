#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int lerTamanho()
{
    int TAM;
    do{
        printf("\nDigite o tamanho do vetor: ");
        scanf("%d", &TAM);
        if(TAM <= 0) printf("\n\aValor Inválido!\n");
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

int numNegativos(float v[], int TAM)
{
    int cont = 0;
    if(TAM == 1)
    {
        if(v[0] < 0){
            cont ++;
        }
    }else{
        if(v[TAM - 1] < 0){
            cont = 1 + numNegativos(v, TAM - 1);
        }else{
            cont = 0 + numNegativos(v, TAM - 1);
        }
    }
    return cont;
}

int main()
{
    setlocale(LC_ALL, "");
    printf("\n\tQuantidade de Valores Negativos em um Vetor\n\n");
    int TAM = lerTamanho();
    float v[TAM];
    lerValores(v, TAM);
    int negativos = numNegativos(v, TAM);
    printf("\nO vetor tem %d valores negativos.\n", negativos);
    return 0;
}
