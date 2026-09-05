#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("\n\tIdentificador de Palíndromo\n\n");
    int n, original, invertido = 0, resto;
    do{
        printf("\nDigite o número a ser avaliado: ");
        scanf("%d", &n);
        if(n<0) printf("\n\aValor inválido! Por favor digite um número maior ou igual a 0!\n");
    }while(n < 0);
    if(n == 0 && n <= 9){
        printf("\nO número digitado é um palíndromo!\n");
    }

    original = n;
    while(n > 0){
        resto = n % 10;
        invertido = invertido * 10 + resto;
        n = n / 10;
    }
    if (original == invertido) printf("\nO número %d é um palíndromo!\n", original);
    else printf("\nO número %d não é um palíndromo!\n", original);
    return 0;
}
