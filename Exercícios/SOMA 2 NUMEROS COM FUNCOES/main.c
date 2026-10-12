#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void apresentacao()
{
    printf("\n\tSOMA DE DOIS NÚMEROS\n");
}
float lerValores()
{
    float x;
    printf("\nDigite um número: ");
    scanf("%f", &x);
    return x;
}
float SOMA(float x, float y)
{
    float s;
    s = x + y;
    return s;
}
void resultado(float x, float y, float s)
{
    printf("\nResultado = %.2f + %.2f = %.2f\n", x, y, s);
}
int main()
{
    setlocale(LC_ALL, "");
    apresentacao();
    float a = lerValores();
    float b = lerValores();
    float soma = SOMA(a,b);
    resultado(a, b, soma);
    return 0;
}
