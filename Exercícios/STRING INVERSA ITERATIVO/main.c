#include <stdio.h>
#include <stdlib.h>

const int maxStr = 50;

void stringInvertida(char str[maxStr])
{
    int tam = 0;
    while(str[tam] != '\0')
    {
        tam++;
    }
    int i = tam - 1;
    while(i >= 0)
    {
        printf("%c", str[i]);
        i--;
    }
}

int main()
{
    printf("\n\tEscreve a String na forma inversa\n");

    char str[maxStr];
    printf("\nDigite o texto: ");
    fgets(str, sizeof(str), stdin);

    printf("\nString invertida:\n");
    stringInvertida(str);
    printf("\n");
    return 0;
}
