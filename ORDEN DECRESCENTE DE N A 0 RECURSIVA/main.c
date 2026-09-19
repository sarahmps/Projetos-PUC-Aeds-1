#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void apresentacao()
{
    printf("\n\tOrdem Decrescente até 0\n");
}

int lerNum()
{
    int num;
    do{
        printf("\nDigite um número natural qualquer: ");
        scanf("%i", &num);
        if(num < 0){
            printf("\n\aValor inválido! Por favor digite um número maior ou igual a 0!\n");
        }
    }while(num < 0);
}

void decrescente(int n)
{
    if(n > 0){
        printf("%i, ", n);
        decrescente(n - 1);
    }else{
        printf("0.\n");
    }
}

int main()
{
    setlocale(LC_ALL, "");
    apresentacao();
    int n = lerNum();
    decrescente(n);
    return 0;
}
