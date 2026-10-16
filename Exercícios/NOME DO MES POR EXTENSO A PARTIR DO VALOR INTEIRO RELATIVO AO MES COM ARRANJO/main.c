#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 12

char* nomeMes(int n)
{
    char* mes[MAX] = {"janeiro", "fevereiro", "março", "abril",
                    "maio", "junho", "julho", "agosto",
                    "setembro", "outubro", "novembro", "dezembro"};
    return mes[n - 1];
}

int main()
{
    setlocale(LC_ALL, "");
    int n;
    printf("\n\tNomes do Mês por Extenso\n\n");
    do{
        printf("\nDigite o valor inteiro relativo ao mês[1, 12]: ");
        scanf("%d", &n);
        if(n < 1 || n > 12){
            printf("\n\aValor inválido!\n");
        }
    }while(n < 1 || n > 12);
    printf("\nO mês %d por extenso é %s\n", n, nomeMes(n));
    return 0;
}
