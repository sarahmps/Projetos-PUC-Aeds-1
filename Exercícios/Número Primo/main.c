#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("\n\tNúmero Primo\n");
    int numero;
    int divisores = 0;
    do{
        printf("\nDigite um número inteiro positivo qualquer: ");
        scanf("%d", &numero);
        if(numero < 0) printf("\n\aValor inválido! Por favor digite um número inteiro positivo!");
    }while(numero < 0);
    for(int i = 2; i < numero; i++){
        if(numero % i == 0) divisores ++;
    }
    if(numero != 0 && numero != 1 && divisores == 0) printf("\nO número %d é PRIMO!\n", numero);
    else printf("\nO número %d NÃO é primo!\n", numero);
    return 0;
}
