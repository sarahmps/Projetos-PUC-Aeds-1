#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void apresentacao()
{
    printf("\n\tSequência Espelhada\n\n");
}

void seqespelho(int n, int m)
{
    if(n < 0 || m < 0){
        return;
    }
    printf("%d, ", n);
    if(n < m){
        seqespelho(n + 1, m);
    }
    printf("%d, ", n);
}

int main()
{
    setlocale(LC_ALL, "");
    apresentacao();
    seqespelho(1, 5);
    return 0;
}
