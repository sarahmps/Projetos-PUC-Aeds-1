#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("\n\tMÉDIA DE 10 NÚMEROS\n");
    int num, cont;
    float soma_num;
    for(cont = 1; cont <= 10 ; cont++){
        if(cont == 1) printf("\nNúmero 1:\nDigite um número inteiro qualquer: ");
        else printf("\nNúmero %d:\nPróximo número: ", cont);
        scanf("%d", &num);
        soma_num += num;
    }
    float media = soma_num / 10.0;
    printf("\nA média dos números lidos é %.2f!\n", media);
    return 0;
}
