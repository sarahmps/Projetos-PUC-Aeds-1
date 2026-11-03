#include <stdio.h>
#include <stdlib.h>

const int maxStr = 50;

void stringInvertida(char str[], int i)
{
    if (str[i] != '\0')
    {
        stringInvertida(str, i + 1);
        printf("%c", str[i]);
    }
}

int main()
{
    printf("\n\tEscreve a String na forma inversa\n");

    char str[maxStr];
    printf("\nDigite o texto: ");
    fgets(str, sizeof(str), stdin);

    printf("\nString invertida:\n");
    int i = 0;
    stringInvertida(str, i);
    printf("\n");
    return 0;
}

