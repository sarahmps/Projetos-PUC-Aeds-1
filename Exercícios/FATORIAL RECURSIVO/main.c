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
        printf("\nDigite um número natural qualquer: ");
        scanf("%d", &num);
        if(num < 0){
            printf("\n\aValor inválido! Por favor digite um número maior ou igual a 0!\n");
        }
    }while(num < 0);
}

int fatorial(int num)
{
    int fat;
    if(num == 0){
        fat = 1;
    }else{
        fat = num * fatorial(num - 1);
    }
    return fat;
}

void resultado(int num, int fat)
{
    printf("\nO fatorial %d! = %d.\n", num, fat);
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
