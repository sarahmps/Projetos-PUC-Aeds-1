#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

const int maxStr = 50;

int vogaisString(char str[maxStr], int i)
{
    int vogais;
    if(str[i] != '\0')
    {
        if(tolower(str[i]) == 'a' ||
           tolower(str[i]) == 'e' ||
           tolower(str[i]) == 'i' ||
           tolower(str[i]) == 'o' ||
           tolower(str[i]) == 'u'){
            vogais = 1 + vogaisString(str, i + 1);
        }else{
            vogais = 0 + vogaisString(str, i + 1);
        }
    }
    return vogais;
}

int main()
{
    printf("\n\tTamanho de uma String\n");
    char str[maxStr];
    printf("\nDigite o texto[max: 49]: ");
    fgets(str, sizeof(str), stdin);
    int i = 0;
    int vogais = vogaisString(str, i);
    printf("\nA string tem %i vogais.\n", vogais);
    return 0;
}
