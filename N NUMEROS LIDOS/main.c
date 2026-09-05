#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("\tNUMEROS PARES E IMPARES LIDOS\n");
    int quant_num, cont, num, pares, impares;
    pares = 0;
    impares = 0;
    printf("\nDigite a quantidade de números a escrever: ");
    scanf("%d", &quant_num);
    for(cont = 1; cont <= quant_num; cont++){
        if(cont == 1){
            printf("Digite um número: ");
        } else {
        printf("\nDigite o próximo número: ");
        }
        scanf("%d", &num);
        bool PAR = num % 2 == 0;
        if(PAR){
            printf("PAR");
            pares += 1;
        }else{
            printf("IMPAR");
            impares += 1;
        }
    }
    printf("\nForam lidos %d números pares e %d números ímpares!\n", pares, impares);
    return 0;
}
