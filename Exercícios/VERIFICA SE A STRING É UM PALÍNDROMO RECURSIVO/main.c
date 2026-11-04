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

bool ehPalindromo(char str[], int i, int j)
{
    bool palindromo = true;
    if(i < j)
    {
        if(str[i] != str[j])
        {
            palindromo = false;
        }else{
            palindromo = ehPalindromo(str, i + 1, j - 1);
        }
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
    int i = 0;
    int j = tam - 1;

    if(ehPalindromo(str, i, j)){
        printf("\nA string é um palíndromo!\n");
    }else{
        printf("\nA string NÃO é um palíndromo!\n");
    }
    return 0;
}
