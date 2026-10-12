#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void apresentacao()
{
    printf("\nPotência De Números Naturais\n");
}

int lerN()
{
    int num;
    do{
        printf("\nDigite o número que gostaria de verificar a potência: ");
        scanf("%d", &num);
        if(num < 0){
            printf("\n\aValor inválido! Por favor digite um número maior ou igual a 0.\n");
        }
    }while(num < 0);
    return num;
}

void teste(int n, int *b, int *k)
{
    *b = n;
    *k = 1;
    if(n > 0){
        int i = 2;
        int flag = 0;
        while(i <= n && !flag){
            int resto = n;
            int exp = 0;
            while(resto % i == 0){
                resto = resto / i;
                exp++;
            }
            if(resto == 1){
                *b = i;
                *k = exp;
                flag = 1;
            }
            i++;
        }
    }
}

int main()
{
    setlocale(LC_ALL, "");
    apresentacao();
    int n = lerN();
    int b, k;
    teste(n, &b, &k);
    printf("\nO número %d equivale à potência: %d^%d.\n", n, b, k);
    return 0;
}
