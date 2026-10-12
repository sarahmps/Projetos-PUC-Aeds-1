#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("\n\tINVERTER UM NÚMERO\n");
    int n, divisao, resto, divisor;
    do{
        printf("\nDigite um número natural qualquer: ");
        scanf("%d", &n);
    }while(n < 0);
    printf("\n\nO inverso do número inserido é:");
    for(int i = 10; i <= n; i = i * 10){
        divisao = n / i;
        resto = n % i;
        divisor = i / 10;
        if(i==10){
            printf("%d", resto);
        }else if(i > 10){
            printf("%d", (resto/divisor));
        }
    }
    printf("%d\n", divisao);
    return 0;
}
