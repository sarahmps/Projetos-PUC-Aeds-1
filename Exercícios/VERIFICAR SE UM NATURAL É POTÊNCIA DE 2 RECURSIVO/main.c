#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void apresentacao()
{
    printf("\nVerificar Se Um Número É Uma Potência De 2\n");
}

int lerNum()
{
    int num;
    do{
        printf("\nDigite um número natural qualquer: ");
        scanf("%i", &num);
        if(num < 0){
            printf("\n\aValor inválido! Por favor digite um número maior ou igual a 0.\n");
        }
    }while(num < 0);
    return num;
}

bool potencia(int num)
{
    if(num <= 0){
        return false;
    }else if(num == 1){
        return true;
    }
    if(num % 2 != 0){
        return false;
    }
    return potencia(num / 2);
}

void resultado(int num, bool pot)
{
    if(pot == true){
        printf("\nO número %i é uma potência de 2.\n", num);
    }else{
        printf("\nO número %i NÃO é uma potência de 2.\n", num);
    }
}

int main()
{
    setlocale(LC_ALL, "");
    apresentacao();
    int num = lerNum();
    bool pot = potencia(num);
    resultado(num, pot);
    return 0;
}
