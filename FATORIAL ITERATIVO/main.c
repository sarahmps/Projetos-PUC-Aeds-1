#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void apresentacao()
{
    printf("\n\tFatorial De Um Número Natural\n");
}

int lerNum()
{
    int num;
    do{
        printf("\nDigite um número natural: ");
        scanf("%d", &num);
        if(num < 0){
            printf("\n\aValor inválido! Por favor digite um número maior ou igual a 0!\n");
        }
    }while(num < 0);
    return num;
}

int fatorial(int num)
{
    int fat = 1;
    for(int i = num; i >= 1; i--)
    {
        fat = fat * i;
    }
    return fat;
}

void resultado(int num, int fat)
{
    printf("\nO fatorial %d! = %d.", num, fat);
}

int main()
{
    setlocale(LC_ALL, "");
    apresentacao();
    int num = lerNum();
    int fat = fatorial(num);
    resultado(num, fat);
    return 0;
}
