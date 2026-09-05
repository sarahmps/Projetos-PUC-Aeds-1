#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("\n\tTriângulo Numérico Invertido\n");
    int n;
    do{
        printf("\nDigite um inteiro positivo qualquer: ");
        scanf("%d", &n);
        if(n<=0) printf("\n\aValor inválido! Por favor digite um número inteiro positivo!\n");
    }while(n<=0);
    printf("\nO triângulo numérico invertido formado por esse valor é: \n\n");
    for(int x = 1; x <= n; n--){
        printf("\n");
        for(int i = 1; i <= n; i++){
            printf("*");
        }
    }
    return 0;
}
