#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("PESO IDEAL MASCULINO\n");
    printf("Digite sua altura em metros: ");
    float ALTURA;
    scanf("%f", &ALTURA);
    float peso_ideal = 72.7 * ALTURA - 58;
    printf("\n O seu peso ideal = %f \n", peso_ideal);
    return 0;
}
