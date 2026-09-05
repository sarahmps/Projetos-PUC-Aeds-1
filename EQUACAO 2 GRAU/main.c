#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Calculadora De Equacoes De Segundo Grau\n");
    float a, b, c;
    printf("\nDigite o 'a' da equacao: ");
    scanf("%f", &a);
    printf("\nDigite o 'b' da equacao: ");
    scanf("%f", &b);
    printf("\nDigite o 'c' da equacao: ");
    scanf("%f",  &c);

    printf("\nEQUACAO (%f)x2 + (%f)x + (%f) = 0\n", a, b, c);

    float delta = (b * b) - (4 * (a) * (c));
    float raiz_delta =  sqrt(delta);

    float  X1 = (-(b) + raiz_delta) / (2 * (a));

    float X2 = (-(b) - raiz_delta) / (2 * (a));

    if(delta >= 0){
        printf("\nPrimeiro, calcula-se o delta para verificar se a equacao possui raizes reais.\nEntao, aplicaremos a formula de bhaskara  para descobrir o valor dessas raizes.\n");
        if(a == 0){
            printf("\n\aRESPOSTA = A equacao eh invalida!\n");
        }else{
            printf("\nRESPOSTA = A equacao informada apresenta duas raizes: %f e %f\n", X1, X2);
        }
    }else{
        printf("\a\nRESPOSTA = O valor de delta eh menor que 0, portanto nao possui uma raiz real!\n");
    }

    return 0;
}
