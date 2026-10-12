#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("\n\tQuadrado Numérico\n");
    int N;
    do{
        printf("\nDigite um número positivo qualquer: ");
        scanf("%d", &N);
        if(N <= 0) printf("\n\aValor inválido! Por favor digite um número positivo!\n");
    }while(N <= 0);
    printf("\nO quadrado numérico desse número é: \n\n");
    for(int x = 1; x <= N; x++){
        for(int i = 1; i <= N; i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
