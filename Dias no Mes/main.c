#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("Número de Dias no Mês\n");
    int ano, mes;
    printf("Digite o ano atual: ");
    scanf("%d", &ano);
    printf("Digite o mes: ");
    scanf("%d", &mes);
    switch(mes)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("\nO mes digitado tem 31 dias!\n");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("\nO mes digitado tem 30 dias!\n");
        break;
    case 2: if(((ano % 4 == 0) && (ano % 100 != 0)) || (ano % 400 == 0)){
            printf("\nO mes digitado tem 29 dias!\n");
        }else{
            printf("\nO mes digitado tem 28 dias!\n");
        }
        break;
    default:
        printf("Mes invalido! Por favor, digite um numero entre 1 e 12: ");
        return 1;
    }
    return 0;
}
