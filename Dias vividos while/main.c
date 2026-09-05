#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("DIAS VIVIDOS!\n");
    int idade;
    do{
        printf("\nDigite a sua idade: ");
        scanf("%d", &idade);
    }while(idade<0);
    int dias = idade * 365;
    printf("\nO número de dias vividos é = %d dias\n", dias);
    return 0;
}
