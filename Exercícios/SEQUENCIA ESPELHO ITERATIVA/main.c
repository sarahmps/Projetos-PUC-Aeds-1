#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void apresentacao()
{
    printf("\n\tSequência Espelhada\n\n");
}

int lerNum()
{
    int num;
    printf("\nDigite um número inteiro qualquer: ");
    scanf("%d", &num);
    return num;
}

void sequenciaI(int n, int m)
{
    if(n > m){
        printf("\n\aVslores Inesperados!\n");
        return;
    }
    for(int i = n; i <= m; i++)
    {
        printf("%d, ", i);
    }
    for(int j = m; j >= n; j--)
    {
        printf("%d, ", j);
    }
}

int main()
{
    setlocale(LC_ALL, "");
    apresentacao();
    int n = lerNum();
    int m = lerNum();
    sequenciaI(n, m);
    return 0;
}
