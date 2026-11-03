#include <stdio.h>
#include <stdlib.h>

const int maxStr = 50;

int tamString(char str[maxStr])
{
    int i = 0;
    while(str[i] != 0)
    {
        i++;
    }
    return i;
}

int main()
{
    printf("\n\tTamanho de uma String\n");
    char str[maxStr];
    printf("\nDigite o texto[max: 49]: ");
    fgets(str, sizeof(str), stdin);
    int tam = tamString(str);
    printf("\nTamanho da string = %i.\n", tam);
    return 0;
}
