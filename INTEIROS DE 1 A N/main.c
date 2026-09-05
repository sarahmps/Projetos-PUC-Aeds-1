#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int N, X;
    printf("Digite um número inteiro qualquer: ");
    scanf("%d", &N);
    for(X == 1; X <= N; X++)
    {
        printf("%d\n", X);
    }
    return 0;
}
