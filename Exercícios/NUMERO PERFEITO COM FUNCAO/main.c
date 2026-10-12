#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void apresentacao()
{
    printf("\n\tNúmero Perfeito\n");
}

int lerNum()
{
    int num;
    do{
        printf("\nDigite um número natural qualquer: ");
        scanf("%d", &num);
        if(num < 0){
            printf("\n\aNúmero inválido! Por favor digite um número maior ou igual a 0!");
        }
    }while(num < 0);
    return num;
}

bool perfeito(int num)
{
    bool PERFEITO = true;
    int x = 1;
    int divisor = 0;
    while(x <= num/2){
        if(num % x == 0){
            divisor += x;
        }
        x++;
    }
    if(divisor != num){
        PERFEITO = false;
    }
    return PERFEITO;
}

void resultado(int num, bool PERFEITO)
{
    if(PERFEITO == true){
        printf("\nO número %d é PERFEITO!\n", num);
    }else{
        printf("\nO número %d NÃO é perfeito\n", num);
    }
}

int main()
{
    setlocale(LC_ALL, "");
    apresentacao();
    int num = lerNum();
    bool PERFEITO = perfeito(num);
    resultado(num, PERFEITO);
    return 0;
}
