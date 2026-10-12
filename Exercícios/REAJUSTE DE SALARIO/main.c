#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("REAJUSTE DE SALARIO\n");
    float salario_atual, novo_salario;
    printf("Digite o seu salario atual: ");
    scanf("%f", &salario_atual);
    if(salario_atual <= 300)
        novo_salario = salario_atual * 1.35;
    else
        novo_salario = salario_atual * 1.15;
    printf("O seu novo salario sera: %f", novo_salario);
    return 0;
}
