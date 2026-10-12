#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Area e Perimetro do quadrado\n\n");
    float LADO;
    printf("Digite o lado do quadrado:");
    scanf("%f", &LADO);
    float AREA = LADO * LADO;
    float PERIMETRO = 4 * LADO;
    printf("A area do quadrado equivale a = %f \n", AREA);
    printf("O perimetro do quadrado equivale a = %f \n", PERIMETRO);
    return 0;
}
