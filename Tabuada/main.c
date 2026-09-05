#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("TABUADA \n");
    float NUMBER;
    printf("\n Digite um numero: ");
    scanf("%f", &NUMBER);
    float t0 = 0 * NUMBER;
    float t1 = 1 * NUMBER;
    float t2 = 2 * NUMBER;
    float t3 = 3 * NUMBER;
    float t4 = 4 * NUMBER;
    float t5 = 5 * NUMBER;
    float t6 = 6 * NUMBER;
    float t7 = 7 * NUMBER;
    float t8 = 8 * NUMBER;
    float t9 = 9 * NUMBER;
    float t10 = 10 * NUMBER;
    printf("\n A tabuada do numero digitado: \n\n %f x 0 = %f, \n %f x 1 = %f, \n %f x 2 = %f, \n %f x 3 = %f, \n %f x 4 = %f, \n %f x 5 = %f, \n %f x 6 = %f, \n %f x 7 = %f, \n %f x 8 = %f, \n %f x 9 = %f, \n %f x 10 = %f \n",NUMBER, t0, NUMBER, t1, NUMBER, t2, NUMBER, t3, NUMBER, t4, NUMBER, t5, NUMBER, t6, NUMBER, t7, NUMBER, t8, NUMBER, t9, NUMBER, t10);
    return 0;
}
