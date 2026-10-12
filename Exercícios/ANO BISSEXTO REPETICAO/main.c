#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

int main()
{
    setlocale(LC_ALL,"");
    printf("\n\tVERIFICADOR DE ANO BISSEXTO\n");
    int ano;
    bool bissexto;
    char continuar;
    do{
        printf("Digite o ano: ");
        scanf("%d", &ano);
        bissexto = (ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0);
        if(bissexto){
            printf("\nO ano informado é bissexto!\n");
        }else{
            printf("\nO ano informado NÃO é bissexto!\n");
        }
        printf("\nDeseja verificar um novo ano?[S/N] ");
        scanf(" %c", &continuar);
        while(continuar != 'S' && continuar != 'N'){
            printf("\nDeseja verificar um novo ano?[S/N] ");
            scanf(" %c", &continuar);
        }
    }while(continuar == 'S');
    return 0;
}
