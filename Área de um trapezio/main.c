#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("AREA DE UM TRAPEZIO \n");
    float BM, bm, ALT;
    printf("\n Digite a base maior do trapezio: ");
    scanf("%f", &BM);
    printf("\n Digite a base menor do trapezio: ");
    scanf("%f", &bm);
    printf("\n Digite a altura do trapezio: ");
    scanf("%f", &ALT);
    float AREA =(ALT * (BM + bm))/2;
    printf("\n A area do trapezio = %f", AREA);
    return 0;
}
