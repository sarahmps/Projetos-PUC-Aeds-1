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
        printf("\nDigite o termo de Fibonacci que gostaria de verificar: ");
        scanf("%i", &k);
        if(k < 0){
            printf("\n\aValor inválido! Por favor digite um número maior que 0.\n");
        }
    }while(k < 0);
    return k;
}

int fibonacci(int k)
{
    int termo = 0;
    if(k == 1 || k == 2){
        return 1;
    }else if(k > 2){
        termo = fibonacci(k - 1) + fibonacci(k - 2);
        return termo;
    }
}

void resultado(int k, int termo)
{
    printf("\nO termo %i da Sequência Se Fibonacci = %i.", k, termo);
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
