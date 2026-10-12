#include <stdio.h>
#include <stdlib.h>

void apresentacao()
{
    printf("\n\tFATORIAL DE UM NUMERO NATURAL\n");
}

int lerNum()
{
    int num;
    do{
        printf("\nDigite um numero natural: ");
        scanf("%d", &num);
        if(num < 0){
            printf("\n\aNumero invalido! Por favor digite um numero natural!\n");
        }
    }while(num < 0);
    return num;
}

int fatorialNum(int num)
{
    int fatorial;
    fatorial = num;
    for(int i = 1; i < num; num--){
        fatorial = fatorial * (num - 1);
    }
    return fatorial;
}

void resultado(int num, int fatorial)
{
    printf("\nO fatorial do numero %d = %d", num, fatorial);
}

int main()
{
    apresentacao();
    int num = lerNum();
    int fatorial = fatorialNum(num);
    resultado(num, fatorial);
    return 0;
}
