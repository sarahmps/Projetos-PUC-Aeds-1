#include <stdio.h>
#include <stdlib.h>

void apresentacao()
{
    printf("\n\tO PERIMETRO DE UM QUADRADO\n");
}

float leiaLado()
{
    float lado;
    printf("\nDigite o lado: ");
    scanf("%f", &lado);
    return lado;
}

float perimetro(float lado)
{
    float p = lado * 4;
    return p;
}

void resultado(float lado, float p)
{
    printf("\nO perimetro de um quadrado de lado %.2f = %.2f cm\n", lado, p);
}

int main()
{
    apresentacao();
    float lado = leiaLado();
    float p = perimetro(lado);
    resultado(lado, p);
    return 0;
}
