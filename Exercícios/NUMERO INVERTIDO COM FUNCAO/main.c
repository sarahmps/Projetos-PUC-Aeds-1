#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void apresentacao()
{
    printf("\n\tNúmero Invertido\n");
}

int lerNum()
{
    int num;
    do{
        printf("\nDigite um número natural qualquer: ");
        scanf("%i", &num);
        if(num < 0) printf("\n\aNúmero inválido! Por favor digite um número maior ou igual a 0!\n");
    }while(num < 0);
    return num;
}

int inverter(int num)
{
    int invertido = 0;
    while(num > 0){
        invertido = invertido * 10 + (num % 10);
        num = num / 10;
    }
    return invertido;
}

void resultado(int num, int invertido)
{
    printf("\nO número %i invertido = %i", num, invertido);
}

int main()
{
    setlocale(LC_ALL, "");
    apresentacao();
    int num = lerNum();
    int invertido = inverter(num);
    resultado(num, invertido);
    return 0;
}
