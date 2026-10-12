#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("\n\tSoma De Dois Números\n");
    float *A = malloc(sizeof(float));//reserva a memória e devolve o endereço do primmeiro byte alocado
    printf("\nDigite o primeiro valor: ");
    scanf("%f", A);
    float *B = malloc(sizeof(float));//o sizeof determina a quantidade ideal de bytes para o tipo da variável
    printf("\nDigite o segundo valor: ");
    scanf("%f", B);
    float *SOMA = malloc(sizeof(float));
    *SOMA = *A + *B;//soma aponta para onde A aponta + onde B aponta
    printf("\n%f + %f = %f\n", *A, *B, *SOMA);//mostra o valor para onde soma aponta
    return 0;
}
