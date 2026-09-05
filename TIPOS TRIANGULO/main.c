#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("TIPOS DE TRIANGULO\n");
    float lado_1, lado_2, lado_3;
    printf("Digite  o primeiro lado: ");
    scanf("%f", &lado_1);
    printf("Digite o segundo lado: ");
    scanf("%f", &lado_2);
    printf("Digite o terceiro lado: ");
    scanf("%f", &lado_3);

    bool TRIANGULO = (lado_1 < lado_2 + lado_3) && (lado_1 > lado_2 - lado_3) && (lado_1 > lado_3 - lado_2) && (lado_2 < lado_3 + lado_1) && (lado_2 > lado_3 - lado_1) && (lado_2 > lado_1 - lado_3) && (lado_3 < lado_2 + lado_1) && (lado_3 > lado_1 - lado_2) && (lado_3 > lado_2 - lado_1);

    if(lado_1 == 0 || lado_2 == 0 || lado_3 == 0)
    {
        printf("\n\aVALORES INVALIDOS! Por favor, digite um numero diferente de 0!\n");
    }
    else if(TRIANGULO)
    {
        if(lado_1 == lado_2 && lado_2 == lado_3){
            printf("\nOs valores digitados formam um triangulo EQUILATERO!\n");
        }else if(lado_1 != lado_2 && lado_2 != lado_3){
            printf("\nOs valores digitados formam um triangulo ESCALENO!\n");
        }else{
            printf("\nOs valores digitados formam um triangulo ISOSCELES!\n");
        }
    }
    else{
        printf("\n\aOs lados informados NAO formam um triangulo!");
    }//fim do if/else
    return 0;
}//fim da main
