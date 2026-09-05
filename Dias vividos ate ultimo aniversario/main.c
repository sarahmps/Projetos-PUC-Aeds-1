#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Dias vividos ate o ultimo aniversario\n\n");
    float IDADE;
    printf("Digite a sua idade:");
    scanf("%f", &IDADE);
    float DIASV = IDADE * 365;
    printf("O numero de dias vividos ate seu ultimo aniversario equivale a = %f", DIASV);
    return 0;
}
