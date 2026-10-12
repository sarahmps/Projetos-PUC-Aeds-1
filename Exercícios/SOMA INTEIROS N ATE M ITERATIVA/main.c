#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void apresentacao()
{
    printf("\n\tSoma De Inteiros Entre Dois Números\n");
}

int lerNum()
{
    int num;
    printf("\nDigite um número inteiro qualquer: ");
    scanf("%d", &num);
    return num;
}

int somaint(int n, int m)
{
    int soma = 0;
    while(n <= m)
    {
        soma = soma + n;
        n++;
    }
    return soma;
}

int resultado(int n, int m, int soma)
{
    printf("\nA soma dos inteiros de %d até %d = %d!\n", n, m, soma);
}

int main()
{
    setlocale(LC_ALL, "");
    apresentacao();
    int n = lerNum();
    int m = lerNum();
    int soma = somaint(n, m);
    resultado(n, m, soma);
    return 0;
}
