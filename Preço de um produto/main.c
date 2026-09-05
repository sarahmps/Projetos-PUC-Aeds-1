#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("NOVO PRECO DO PRODUTO \n");
    float PRECO;
    printf("Digite o preco do produto: ");
    scanf("%f", &PRECO);
    float DESCONTO = 0.90 * PRECO;
    printf("O novo preco do produto = %f", DESCONTO);
    return 0;
}
