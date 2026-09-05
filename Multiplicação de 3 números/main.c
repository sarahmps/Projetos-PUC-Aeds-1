#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("MULTIPLICACAO DE 3 NUMEROS \n");
    float N1, N2, N3, MULTI;
    printf("Digite o primeiro numero: ");
    scanf("%f", &N1);
    printf("Digite o segundo numero: ");
    scanf("%f", &N2);
    printf("Digite o terceiro numero: ");
    scanf("%f", &N3);
    MULTI = N1 * N2 * N3;
    printf("O resultado da multiplicacao equivale a = %f", MULTI);
    return 0;
}
