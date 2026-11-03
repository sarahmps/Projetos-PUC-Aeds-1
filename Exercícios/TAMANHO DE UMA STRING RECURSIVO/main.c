#include <stdio.h>
#include <stdlib.h>

const int maxStr = 50;

int tamString(char str[maxStr], int i)
{
    int counter;
    if(str[i] == '\0')
    {
        counter = 0;
    }else{
        counter = 1 + tamString(str, i + 1);
    }
    return counter;
}

int main()
{
    printf("\n\tTamanho de uma String\n");
    char str[maxStr];
    printf("\nDigite o texto[max: 49]: ");
    fgets(str, sizeof(str), stdin);
    int i = 0;
    int tam = tamString(str, i);
    printf("\nTamanho da string = %i.\n", tam);
    return 0;
}
