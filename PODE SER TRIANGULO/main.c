#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("Criterios para formacao de um triangulo\n");
    float lado_1, lado_2, lado_3;
    printf("\nDigite o primeiro lado do triangulo: ");
    scanf("%f", &lado_1);
    printf("\nDigite o segundo lado do triangulo: ");
    scanf("%f", &lado_2);
    printf("\nDigite o terceiro lado do triangulo: ");
    scanf("%f", &lado_3);
    bool TRIANGULO = ((lado_1 < lado_2 + lado_3)  && (lado_1 > lado_2 - lado_3) && (lado_1 > lado_3 - lado_2))
    && ((lado_2 < lado_1 + lado_3) && (lado_2 > lado_1 - lado_3) && (lado_2 > lado_3 - lado_1))
    &&  ((lado_3 < lado_2 + lado_1) && (lado_3 > lado_2 - lado_1) && (lado_3 > lado_1 - lado_2));
    if(lado_1 == 0 || lado_2 ==0 || lado_3 == 0){
        printf("\a\nVALOR INVALIDO! Os lados precisam ser diferentes de 0!\n");
        }else if(TRIANGULO){
            printf("\nEh um triangulo! Os lados informados atendem todos os criterios para a formacao de um triangulo.\n");
        }
        else{
            printf("\nNAO eh um triangulo! Os lados informados NAO atendem os criterios necessarios para a formacao de um triangulo!\n");
        }
    return 0;
}
