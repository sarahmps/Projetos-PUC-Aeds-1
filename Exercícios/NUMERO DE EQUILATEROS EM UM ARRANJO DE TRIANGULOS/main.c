#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 100
int TAM = 0;

typedef struct{
    float L1;
    float L2;
    float L3;
}triangulo;

void lerTriangulos(triangulo t[])
{
    int n;
    printf("\nQuantidade de triângulos a analisar: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("\n\tTriângulo %i:\n", i+1);

        printf("\nDigite o lado A: ");
        scanf("%f", &t[i].L1);

        printf("\nDigite o lado B: ");
        scanf("%f", &t[i].L2);

        printf("\nDigite o lado C: ");
        scanf("%f", &t[i].L3);

        TAM++;
    }
}

int numEquilateros(triangulo t[])
{
    int c = 0;
    for(int i = 0; i < TAM; i++)
    {
        if(t[i].L1 == t[i].L2 && t[i].L2 == t[i].L3)
        {
            c++;
        }
    }
    return c;
}

int main()
{
    setlocale(LC_ALL, "");
    printf("\n\tNúmero de equiláteros em um arranjo de triângulos\n\n");

    triangulo t[MAX];
    lerTriangulos(t);

    int equilateros = numEquilateros(t);
    printf("\nNo arranjo, há %d triângulos equiláteros.\n", equilateros);
    return 0;
}
