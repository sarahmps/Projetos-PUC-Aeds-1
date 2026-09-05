#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("PESO IDEAL\n");
    float  ALTURA;
    printf("Digite a sua altura em metros: ");
    scanf("%f", &ALTURA);
    char SEXO;
    printf("Digite o seu sexo [M/F]: ");
    scanf("%c ", &SEXO);
    float PESO_IDEAL;
    if(SEXO=='M')
        PESO_IDEAL=(72.7*ALTURA)-58;
    else
        PESO_IDEAL=(62.1*ALTURA)-44.7;
    printf("\nO seu peso ideal = %f\n", PESO_IDEAL);
    return 0;
}
