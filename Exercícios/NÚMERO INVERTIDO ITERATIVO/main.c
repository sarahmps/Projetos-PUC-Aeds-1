#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void apresentacao()
{
    printf("\n\tNúmero Natural Invertido\n");
}

int lerNum()
{
    int num;
    do{
        printf("\nDigite um número natural qualquer: ");
        scanf("%d", &num);
        if(num < 0){
            printf("\nValor inválido! Por favor digite um número menor ou igual a 0.\n");
        }
    }while(num < 0);
    return num;
}

int inverterNum(int num)
{
    int invertido = 0;
    while(num > 0){
        invertido = (invertido * 10) + (num % 10);
        num = num / 10;
    }
    return invertido;
}

void resultado(int num, int invertido)
{
    printf("\nO número %d invertido = %d.\n", num, invertido);
}

int main()
{
    setlocale(LC_ALL, "");
    apresentacao();
    int num = lerNum();
    int invertido = inverterNum(num);
    resultado(num, invertido);
    return 0;
}
