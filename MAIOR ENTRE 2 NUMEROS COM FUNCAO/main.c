#include <stdio.h>
#include <stdlib.h>

void apresentacao()
{
    printf("\n\tO MAIOR ENTRE DOIS NUMEROS\n");
}

float leiaNum()
{
    float n;
    printf("\nDigite um numero: ");
    scanf("%f", &n);
    return n;
}

float maiorNum(float n1, float n2)
{
    float maior;
    if(n1 > n2) maior = n1;
    else if(n2 > n1) maior = n2;
    return maior;
}

void resultado(float n1, float n2, float maior)
{
    printf("\nEntre os numeros %.2f e %.2f, o maior = %.2f\n", n1, n2, maior);
}

int main()
{
    apresentacao();
    float n1 = leiaNum();
    float n2 = leiaNum();
    float maior = maiorNum(n1, n2);
    resultado(n1, n2, maior);
    return 0;
}
