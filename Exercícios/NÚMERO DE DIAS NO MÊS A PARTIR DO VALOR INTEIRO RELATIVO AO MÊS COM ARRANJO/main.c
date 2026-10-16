#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int diasMes(int n)
{
    int dias;
    int v[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    dias = v[n - 1];
    return dias;
}

int main()
{
    setlocale(LC_ALL, "");
    printf("\n\tNúmeros de Dias no Mês\n\n");
    int n;
    do{
        printf("\nDigite o valor inteiro referente ao mês: ");
        scanf("%d", &n);
        if(n < 1 || n > 12){
            printf("\n\aValor inválido!\n");
        }
    }while(n < 1 || n > 12);
    int dias = diasMes(n);
    printf("\nO mês digitado tem %d dias!\n", dias);
    return 0;
}
