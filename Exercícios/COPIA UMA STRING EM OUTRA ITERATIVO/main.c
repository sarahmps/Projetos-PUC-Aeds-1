#include <stdio.h>
#include <stdlib.h>

#define MAX_STR 50

void lerValores(char origem[])
{
    printf("\nDigite o texto: ");
    fgets(origem, MAX_STR, stdin);

    int i = 0;
    while(str[i] != '\0' && str[i] != '\n')
    {
        i++;
    }
    str[i] = '\0';
}

void copia(char destino[], char origem[])
{
    int i = 0;
    while(origem[i] != '\0')
    {
        destino[i] = origem[i];
        i++;
    }
    destino[i] = '\0';
}

int main()
{
    printf("\n\tCopia uma string em outra\n\n");

    char origem[MAX_STR];
    lerValores(origem);

    char destino[MAX_STR];
    copia(destino, origem);

    printf("\nEscrevendo a copia:\n\n");
    printf("%s", destino);
    return 0;
}
