#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("\nCONVERTOR DE MEDIDAS\n\nMENU:\n\n1 – De Quilômetros para Milhas\n2 – De Metros para Pés\n3 – De Célsius para Farenheit\n4 – De Quilogramas para Libras\n");
    int menu;
    printf("\nEscolha uma das opções do menu acima: ");
    scanf("%i", &menu);
    float N;
    printf("\nAgora, informe o valor a ser convertido: ");
    scanf("%f", &N);
    float resultado;
    switch(menu)
    {
    case 1:
        resultado = ((N) * 0.6214);
        printf("\nResultado da conversão: %f milhas\n", resultado);
        break;
    case 2:
        resultado = ((N) * 3.281);
        printf("\nResultado da conversão: %f pés\n", resultado);
        break;
    case 3:
        resultado = (((N) * 1.8) + 32);
        printf("\nResultado da conversão: %f farenheit\n", resultado);
        break;
    case 4:
        resultado = ((N) * 2.20462);
        printf("\nResultado da conversão: %f libras\n", resultado);
        break;
    default:
        printf("\n\aOpção inválida de menu!\a");
    }
    return 0;
}
