#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("\n\tPotenciação\n");
    float base;
    int expoente;
    float pot = 1;
    printf("\nDigite o valor da base: ");
    scanf("%f", &base);
    do{
        printf("\nDigite o valor do expoente (o expoente deve ser um número natural): ");
        scanf("%d", &expoente);
        if(expoente < 0) printf("\n\aValor inválido! O expoente deve ser um número maior ou igual a 0!\n");
    }while(expoente < 0);
    for(int i = 1; i <= expoente; i++){
        pot *= base;
    }
    printf("\nA potência informada é igual a:\n%.2f^%d = %.2f\n", base, expoente, pot);
    return 0;
}
