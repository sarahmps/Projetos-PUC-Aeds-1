#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void apresentacao()
{
    printf("\n\tSequência Espelhada\n\n");
}

void seqespelho(int n, int m)
{
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
    int n = 1;
    int m = 5;
    seqespelho(n, m);
    printf("\n");
    return 0;
}
