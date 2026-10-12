#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("\n\tCALCULADORA DE POTENCIAÇÃO\n");
    float base, resultado;
    int expoente, cont;
    printf("\nOBS.: A base deve ser um número real, e o expoente deve ser um número natural: inteiro, positivo ou nulo!\n");
    printf("\nDigite a base: ");
    scanf("%f", &base);
    printf("\nDigite o expoente: ");
    scanf("%d", &expoente);
    while (expoente < 0) {
        printf("Expoente invalido! Digite um numero inteiro positivo ou zero: ");
        scanf("%d", &expoente);
    }
    resultado = 1;
    for(cont = 1; cont <= expoente; cont++){
        resultado = resultado * base;
    }
    printf("O resultado é: %f", resultado);
    return 0;
}
