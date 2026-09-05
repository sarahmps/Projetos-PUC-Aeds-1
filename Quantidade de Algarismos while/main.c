#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\tLeitor de quantidade de algarismos\n");
    int n;
    do{
        printf("\nDigite o numero natural qualquer: ");
        scanf("%d", &n);
        if(n < 0) printf("\n\aValor invalido! Por favor digite um numero maior ou igual a 0!");
    }while(n < 0);
    int algarismos = 0;
    while(n > 0){
        n /= 10;
        algarismos ++;
    }
    if(n == 0){
        algarismos = 1;
    }
    printf("\nO numero digitado tem %d algarismos!\n", algarismos);
    return 0;
}
