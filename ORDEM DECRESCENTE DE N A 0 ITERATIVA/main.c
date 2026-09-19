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
        scanf("%d", &num);
        if(num < 0){
            printf("\n\aValor inválido! Por favor digite um número menor ou igual a o!\n");
        }
    }while(num < 0);
}

void decrescente(int n)
{
    printf("\n");
    for(int i = n; i > 0; i--)
    {
        printf("%d, ", i);
    }
    printf("0.\n");
}

int main()
{
    setlocale(LC_ALL, "");
    apresentacao();
    int n = lerNum();
    decrescente(n);
    return 0;
}
