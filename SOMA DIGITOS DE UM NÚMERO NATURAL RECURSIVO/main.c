#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void apresentacao()
{
    printf("\n\tSoma Dos Digitos De Um Número Natural\n");
}

int lerNum()
{
    int num;
    do{
        printf("\nDigite um número natural qualquer: ");
        scanf("%d", &num);
        if(num < 0){
            printf("\nValor inválido! Por favor digite um número maior ou igual a 0.\n");
        }
    }while(num < 0);
    return num;
}

int somaDigitos(int num, int soma)
{
    if(num == 0){
        return soma;
    }
    somaDigitos(num/10, soma + (num % 10));
}

void resultado(int num, int soma)
{
    printf("\nA soma dos digitos do número %d = %d\n", num, soma);
}

int main()
{
    setlocale(LC_ALL, "");
    int soma = 0;
    int num = lerNum();
    soma = somaDigitos(num, soma);
    resultado(num, soma);
    return 0;
}
