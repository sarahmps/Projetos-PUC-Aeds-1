#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("ANO BISSEXTO\n");
    int ANO;
    printf("\nDigite o ano: ");
    scanf("%d", &ANO);
    bool BISSEXTO = ANO % 4 == 0;
    if(BISSEXTO)
        printf("\nO ano e bissexto!\n");
    else
        printf("\nO ano nao e bissexto!\n");
    return 0;
}
