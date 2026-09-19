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
            printf("\n\aValor inválido! Por favor digite um número maior ou igual a 0.\n");
        }
    }while(num < 0);
    return num;
}

int inverterNum(int num, int invertido)
{
    if(num == 0){
        return invertido;
    }
    inverterNum(num/10, (invertido * 10) + (num % 10));
}

void resultado(int num, int invertido)
{
    printf("\nO número %d invertido = %d.\n", num, invertido);
}

int main()
{
    setlocale(LC_ALL, "");
    int invertido = 0;
    int num = lerNum();
    invertido = inverterNum(num, invertido);
    resultado(num, invertido);
    return 0;
}
