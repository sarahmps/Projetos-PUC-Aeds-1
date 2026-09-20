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

void imprimirBinario(int decimal)
{
   int peso = 1;
   while(peso * 2 <= decimal){
    peso = peso * 2;
   }
   int binario;
   while(peso > 0){
    binario = decimal / peso;
    printf("%d", binario);
    decimal = decimal % peso;
    peso = peso / 2;
   }
}


int main()
{
    setlocale(LC_ALL, "");
    apresentacao();
    int decimal = lerDecimal();
    printf("\nO número %d em decimal = ", decimal);
    imprimirBinario(decimal);
    return 0;
}
