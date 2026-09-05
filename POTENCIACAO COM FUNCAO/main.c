#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void apresentacao()
{
    printf("\n\tPotenciação\n");
}

float lerBase()
{
    float base;
    printf("\nDigite a base: ");
    scanf("%f", &base);
    return base;
}

int lerExp()
{
    int exp;
    printf("\nDigite o expoente(numero inteiro!): ");
    scanf("%d", &exp);
    return exp;
}

float potenciacao(float base, int exp)
{
    float pot = 1;
    if(exp < 0){
        base = 1 / base;
        exp = abs(exp);
    }
    for(int i = 1; i <= exp ; i++)
    {
        pot = pot * base;
    }
    return pot;
}

void resultado(float base, int exp, float pot)
{
    printf("\nA potenciacao: %.2f^%.2d = %f\n", base, exp, pot);
}

int main()
{
    setlocale(LC_ALL, "");
    apresentacao();
    float base = lerBase();
    int exp = lerExp();
    float pot = potenciacao(base, exp);
    resultado(base, exp, pot);
    return 0;
}
