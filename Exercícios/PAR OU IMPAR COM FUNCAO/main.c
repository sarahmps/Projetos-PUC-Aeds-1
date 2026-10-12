#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void apresentacao()
{
    printf("\n\tNUMERO PAR OU IMPAR\n");
}

int leiaNum()
{
    int num;
    do{
        printf("\nDigite um numero inteiro: ");
        scanf("%d", &num);
        if(num < 0){
            printf("\n\aValor invalido! Por favor digite um numero positivo inteiro!\n");
        }
    }while(num < 0);
    return num;
}

bool PAR(int num)
{
    return num % 2 == 0;
}

void resultado(int num, bool par)
{
    if(par){
        printf("\nO numero %d = PAR\n", num);
    }else{
        printf("\nO numero %d = IMPAR\n", num);
    }
}

int main()
{
    apresentacao();
    int num = leiaNum();
    bool par = PAR(num);
    resultado(num, par);
    return 0;
}
