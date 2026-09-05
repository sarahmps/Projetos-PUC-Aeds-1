#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("\n\tPAR OU IMPAR\n");
    int num, pares, impares, cont;
    for(cont = 1; cont <= 10 ; cont++){
        if(cont == 1) printf("\nNúmero 1:\nDigite um número inteiro qualquer: ");
        else printf("\nNúmero %d:\nPróximo número: ", cont);
        scanf("%d", &num);
        if(num % 2 == 0){
            printf("\nPAR!\n");
            pares++;
        }else{
            printf("\nÍMPAR!\n");
            impares++;
        }
    }
    printf("\nForam lidos %d números pares, e %d números ímpares!\n", pares, impares);
    return 0;
}
