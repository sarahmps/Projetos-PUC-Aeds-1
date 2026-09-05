#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\tMAIOR E MENOR NUMERO INTEIRO LIDO\n");
    int totaln_lidos, numero, maior, menor;
    printf("\nDigite quantos numeros serao lidos: ");
    scanf("%d", &totaln_lidos);
    numero = 0;
    for(int cont = 1 ; cont <= totaln_lidos ; cont++){
        if(cont == 1) printf("\nDigite um numero inteiro qualquer: ");
        else printf("\nProximo numero inteiro: ");
        scanf("%d", &numero);
    }
    printf("\nO maior numero lido foi %d, e o menor numero lido foi %d \n", maior, menor);
    return 0;
}
