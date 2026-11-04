#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#include <ctype.h>

#define MAX_STR 50

void lerValores(char str[])
{
    printf("\nDigite o texto: ");
    fgets(str, MAX_STR, stdin);

    int i = 0;
    while(str[i] != '\0' && str[i] != '\n')
    {
        i++;
    }
    str[i] = '\0';
}

bool stringsIguais(char str1[], char str2[], int i)
{
    bool iguais;

    if((str1[i] == '\0' && str2[i] != '\0') || (str1[i] != '\0' && str2[i] == '\0'))
    {
        iguais = false;
    }else if(tolower(str1[i]) != tolower(str2[i])){
        iguais = false;
    }else if(str1[i] == '\0' && str2[i] == '\0'){
        iguais = true;
    }else{
        iguais = stringsIguais(str1, str2, i + 1);
    }
    return iguais;
}

int main()
{
    setlocale(LC_ALL, "");
    printf("\n\tVerificando se duas strings são iguais\n\n");

    char str1[MAX_STR];
    printf("\nLendo a primeira string:\n");
    lerValores(str1);

    char str2[MAX_STR];
    printf("\nLendo a segunda string:\n");
    lerValores(str2);

    int i = 0;
    if(stringsIguais(str1, str2, i))
    {
        printf("\nAs duas strings são iguais!\n");
    }else{
        printf("\nAs duas strings NÃO são iguais\n");
    }
    return 0;
}
