#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("\n\tMAIOR DIFERENÇA ABSOLUTA ENTRE NÚMEROS INTEIROS\n\n");
    int primeiro, n, a, b, diferenca, maior = 0;
    printf("\nDigite o primeiro número a ser analisado (0 encerra): ");
    scanf("%i", &primeiro);
    a = primeiro;
    do{
        printf("\nDigite o próximo número(0 encerra): ");
        scanf("%i", &n);
        if(n != 0){
            b = n;
            diferenca = a - b;
            if(diferenca < 0){
                diferenca = -(diferenca);
            }
            if(diferenca > maior){
                maior = diferenca;
            }
            printf("\nnúmeros: %d e %d\ndiferença: %d\n", a, b, diferenca);
            a = n;
        }
    }while(n != 0);
    printf("\nA maior diferença absoluta entre os números informados é %i", maior);
    return 0;
}
