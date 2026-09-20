#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void apresentacao()
{
    printf("\n\tTransformar Um Número Decimal Em Binário\n");
}

int lerDecimal()
{
    int decimal;
    do{
        printf("\nDigite o número decimal que gostaria de converter para binário: ");
        scanf("%d", &decimal);
        if(decimal < 0){
            printf("\n\aValor inválido! Por favor digite um número maior ou igual a 0.\n");
        }
    }while(decimal < 0);
    return decimal;
}

int maiorPeso(int peso, int decimal)
{
    if(peso * 2 > decimal){
        return peso;
    }
    return maiorPeso(peso * 2, decimal);
}

void imprimeBinario(int decimal, int peso)
{
    if(peso <= 0){
        return;
    }
    int binario = decimal / peso;
    printf("%d", binario);
    imprimeBinario(decimal % peso, peso / 2);
}

int main()
{
    setlocale(LC_ALL, "");
    apresentacao();
    int decimal = lerDecimal();
    int peso = 1;
    peso = maiorPeso(peso, decimal);
    printf("\nO número %d em binário = ", decimal);
    imprimeBinario(decimal, peso);
    return 0;
}
