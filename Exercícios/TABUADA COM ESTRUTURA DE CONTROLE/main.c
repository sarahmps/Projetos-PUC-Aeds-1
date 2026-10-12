#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\nTABUADA\n");
    int N;
    printf("\nDigite um numero inteiro qualquer: ");
    scanf("%d", &N);
    for(int X = 1; X <= 10; X++){
        int T = N * X;
        printf("%d X %d = % d\n", X, N, T);
    }
    return 0;
}
