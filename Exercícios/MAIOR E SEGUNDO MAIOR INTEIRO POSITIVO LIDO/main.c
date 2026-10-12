#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("\n\tMaior e Segundo Maior Número Inteiro Positivo Lido\n");
    int num, maior = 0, segundo = 0;
    do{
        do{
            printf("\nDigite um número inteiro positivo qualquer: ");
            scanf("%d", &num);
            if(num < 0){
                printf("\nNúmero inválido! Por favor digite um número maior que 0!\n");
            }
        }while(num < 0);
        if(num > 0){
            if(num > maior){
                segundo = maior;
                maior = num;
            }
            if(num > segundo && num < maior){
                segundo = num;
            }
            printf("\n%d, %d", maior, segundo);
        }
    }while(num != 0);
    printf("\nEntre os números informados, o maior é %d, e o segundo maior é %d!\n", maior, segundo);
    return 0;
}
