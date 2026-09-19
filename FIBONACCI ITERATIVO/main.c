#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void apresentacao()
{
    printf("\n\tK-ésimo Termo De Fibonacci\n");
}

int lerK()
{
    int k;
    do{
        printf("\nDigite o termo que gostaria de conferir: ");
        scanf("%d", &k);
        if(k < 0){
            printf("\n\aTermo inválido! Por favor, digite um número maior ou igual a 0!");
        }
    }while(k < 0);
}

int fibonacci(int k)
{
    int a = 0;
    int b = 1;
    int termo;
    if(k == 1){
        termo = 1;
    }
    while(k >= 2){
        termo = a + b;
        a = b;
        b = termo;
        k --;
    }
    return termo;
}

void resultado(int k, int termo)
{
    printf("\nO termo %i da sequência de Fibonacci = %i", k, termo);
}

int main()
{
    setlocale(LC_ALL, "");
    apresentacao();
    int k = lerK();
    int termo = fibonacci(k);
    resultado(k, termo);
    return 0;
}
