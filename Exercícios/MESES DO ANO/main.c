#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Meses do Ano\n");
    int MES;
    printf("Digite o mes do ano, em forma numerica: ");
    scanf("%d", &MES);
    switch(MES)
    {
    case 1:
        printf("\nJaneiro\n");
        break;
    case 2:
        printf("\nFevereiro\n");
        break;
    case 3:
        printf("\nMarco\n");
        break;
    case 4:
        printf("\nAbril\n");
        break;
    case 5:
        printf("\nMaio\n");
        break;
    case 6:
        printf("\nJunho\n");
        break;
    case 7:
        printf("\nJulho\n");
        break;
    case 8:
        printf("\nAgosto\n");
        break;
    case 9:
        printf("\nSetembro\n");
        break;
    case 10:
        printf("\nOutubro\n");
        break;
    case 11:
        printf("\nNovembro\n");
        break;
    case 12:
        printf("\nDezembro\n");
        break;
    default:
        printf("\n\aMes invalido! Por favor digite um numero entre 1 e 12.\n");
    }
    return 0;
}
