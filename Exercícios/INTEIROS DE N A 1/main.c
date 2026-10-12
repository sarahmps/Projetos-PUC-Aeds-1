#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int N, X;
    printf("Digite um número inteiro qualquer: ");
    scanf("%d", &N);
    for(X == 1; N >= X; N--)
    {
        printf("%d\n", N);
    }
    return 0;
}
