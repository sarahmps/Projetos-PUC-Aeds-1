#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

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

int tamanho(char str[])
{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}

bool ehPalindromo(char str[], int tam)
{
    bool palindromo = true;
    int i = 0;
    int j = tam - 1;
    while(palindromo && i < j)
    {
        if(str[i] != str[j]){
            palindromo = false;
        }
        i++;
        j--;
    }
    return palindromo;
}

int main()
{
    setlocale(LC_ALL, "");
    printf("\n\tVerificar se uma string é um palíndromo ou não\n\n");

    char str[MAX_STR];
    lerValores(str);

    printf("\nString\n");
    printf("%s", str);

    int tam = tamanho(str);

    if(ehPalindromo(str, tam)){
        printf("\nA string é um palíndromo!\n");
    }else{
        printf("\nA string NÃO é um palíndromo!\n");
    }
    return 0;
}
