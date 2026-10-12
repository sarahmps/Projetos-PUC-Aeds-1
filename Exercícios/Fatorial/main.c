#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("\n\tFATORIAL\n");
    int numero;
    do{
        printf("\nDigite um número inteiro não negativo qualquer: ");
        scanf("%d", &numero);
        if(numero < 0) printf("\n\aValor inválido! Por favor informe um número inteiro não negativo!\n");
    }while(numero < 0);
    int fatorial = numero;
    for(int i = 1; numero > i; numero--){
        fatorial *= (numero - 1);
    }
    printf("\nO fatorial do número informado é igual a: %d\n", fatorial);
    return 0;
}
