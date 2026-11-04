#include <stdio.h>
#include <stdlib.h>

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

void inverteStr(char str[], int tam)
{
    int i = 0;
    int j = tam - 1;
    char aux;
    while(i < j)
    {
        aux = str[i];
        str[i] = str[j];
        str[j] = aux;
        i++;
        j--;
    }
}

int main()
{
    printf("\n\tInvertendo Uma String\n\n");

    char str[MAX_STR];
    lerValores(str);

    printf("\nString Normal:\n");
    printf("%s", str);

    int tam = tamanho(str);

    inverteStr(str, tam);
    printf("\nString Invertida:\n");
    printf("%s", str);
    printf("\n");
    return 0;
}
