#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("\n\tTriângulo Numérico\n");
    int n;
    do{
        printf("\nDigite um inteiro positivo qualquer: ");
        scanf("%d", &n);
        if(n<=0) printf("\n\aValor inválido! Por favor digite um número inteiro positivo!\n");
    }while(n<=0);
    printf("\nO triângulo numérico formado por esse valor é: ");
    for(int i = 1; i <= n; i++){
        printf("\n");
        for(int j = 1; j <= i; j++){
            printf("*");
        }
    }
    return 0;
}
