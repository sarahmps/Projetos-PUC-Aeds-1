#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("\n\tRetângulo Numérico\n");
    int base, altura;
    do{
        printf("\nValor da base: ");
        scanf("%d", &base);
        if(base<=0) printf("\n\aBase inválida! Por favor digite um número positivo!\n");
    }while(base<=0);
    do{
        printf("\nValor da altura: ");
        scanf("%d", &altura);
        if(altura<=0) printf("\n\aAltura inválida! Por favor digite um número positivo!\n");
    }while(altura<=0);
    printf("\n\nSeu retângulo numérico corresponde a: \n\n");
    for(int x = 1; x <= altura; x++){
        for(int i = 1; i <= base; i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
