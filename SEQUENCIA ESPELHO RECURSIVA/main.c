#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void apresentacao(){
    printf("\n\tSequência Espelhada\n\n");
}

int lerNum()
{
    int num;
    printf("\nDigite um número inteiro qualquer: ");
    scanf("%i", &num);
    return num;
}

void sequenciaI(int n, int m)
{
    if(n > m){
        printf("\nValores inesperados.\n");
        return;
    }
    printf("%i, ", n);
    if(n < m){
        sequenciaI(n + 1, m);
    }
    printf("%i, ", n);
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
