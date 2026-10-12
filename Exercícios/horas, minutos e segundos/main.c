#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("CONVERTOR DE HORAS PARA MINUTOS E SEGUNDOS \n");
    float H, MIN;
    printf("\n Digite as horas do horario em questao: ");
    scanf("%f", &H);
    printf("\n Digite os minutos do horario em questao: ");
    scanf("%f", &MIN);
    float HtM = 60 * H;
    float MINT = HtM + MIN;
    float MtS = 60 * MINT;
    printf ("\n %f horas equivale a: %f minutos \n Em minutos, o valor total inserido equivale a: %f minutos \n Ja se transformarmos esse valor em segundos, temos: %f segundos \n", H, HtM, MINT, MtS);
    return 0;
}
