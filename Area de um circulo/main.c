#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("AREA DE UM CIRCULO\n");
    printf("Informe o raio do circulo: ");
    float raio;
    scanf("%f", raio);
    float PI = 3.14;
    float area = raio * raio * PI;
    printf("A area do circulo = %f", &area);
    return 0;
}
