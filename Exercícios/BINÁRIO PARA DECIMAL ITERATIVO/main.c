#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void apresentacao()
{
    printf("\n\tTransformar Número Binário Em Decimal\n");
}

int lerBinario()
{
    int binario;
    do{
        printf("\nDigite o valor binário a ser convertido para decimal: ");
        scanf("%d", &binario);
        if(binario < 0){
            printf("\n\aValor inválido. Por favor digite um número igual ou maior que 0.");
        }
    }while(binario < 0);
    return binario;
}

int binarioParaDecimal(int binario)
{
    int decimal = 0;
    int peso = 1;
    while(binario > 0)
    {
        decimal = decimal + (binario % 10) * peso;
        binario = binario / 10;
        peso = peso * 2;
    }
    return decimal;
}

void resultado(int binario, int decimal)
{
    printf("\nO número %d em decimal = %d.\n", binario, decimal);
}

int main()
{
    setlocale(LC_ALL, "");
    apresentacao();
    int binario = lerBinario();
    int decimal = binarioParaDecimal(binario);
    resultado(binario, decimal);
    return 0;
}
