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
            printf("\n\aValor inválido! Por favor digite um número maior ou igual a 0.\n");
        }
    }while(num < 0);
    return num;
}

int somaDigitos(int num)
{
    int soma = 0;
    while(num > 0){
        soma = soma + num%10;
        num = num / 10;
    }
    return soma;
}

void resultado(int num, int soma)
{
    printf("\nA soma dos digitos do número %d = %d\n", num, soma);
}

int main()
{
    setlocale(LC_ALL, "");
    apresentacao();
    int num = lerNum();
    int soma = somaDigitos(num);
    resultado(num, soma);
    return 0;
}
