#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("NUMERO PAR OU IMPAR\n");
    int NUMBER;
    printf("\nDigite um numero inteiro qualquer: ");
    scanf("%i", &NUMBER);
    if(NUMBER%2==0)
        printf("\nO numero digitado = PAR\n");
    else
        printf("\nO numero digitado = IMPAR\n");
    return 0;
}
