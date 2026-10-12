#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("MAIOR VALOR ENTRE DOIS NUMEROS\n");
    float N1, N2;
    printf("\nDigite o primeiro numero: ");
    scanf("%f", &N1);
    printf("Digite o segundo numero: ");
    scanf("%f", &N2);
    float MAIOR;
    if (N1>N2)
        MAIOR = N1;
    else
        MAIOR = N2;
    printf("\nO maior valor = %f", MAIOR);
    return 0;
}
