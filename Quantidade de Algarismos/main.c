#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("\n\tQuantidade de Algarismos de um Número Natural\n");
    int n, algarismos = 0;
    do{
        printf("\nDigite um número natural qualquer: ");
        scanf("%d", &n);
        if(n < 0) printf("\n\aValor inválido! Por favor digite um número maior ou igual a 0!\n");
    }while(n < 0);
    for(int i = 1; i <= n ; i = i * 10){
        if(n / i >= 1) algarismos ++;
    }
    printf("\nO número informado apresenta %d algarismos!\n", algarismos);
    return 0;
}
