#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void apresentacao()
{
    printf("\n\tNúmero Palíndromo Ou Não\n");
}

int lerNum()
{
    int num;
    do{
        printf("\nDigite um número natural: ");
        scanf("%i", &num);
        if(num < 0){
            printf("\n\aVslor inválido! Por favor digite um número maior ou igual a 0.\n");
        }
    }while(num < 0);
    return num;
}

int inverterNum(int num, int invertido)
{
    if(num == 0){
        return invertido;
    }
    inverterNum(num/ 10, invertido * 10 + num%10);
}

bool palindromo(int num, int inv)
{
    if(inv == num){
        return true;
    }else{
        return false;
    }
}

void resultado(int num, bool pal)
{
    if(pal == false){
        printf("\nO número %d não é palíndromo.\n", num);
    }else{
        printf("\nO número %d é palíndromo.\n", num);
    }
}

int main()
{
    setlocale(LC_ALL, "");
    apresentacao();
    int invertido = 0;
    int num = lerNum();
    int inv = inverterNum(num, invertido);
    bool pal = palindromo(num, inv);
    resultado(num, pal);
    return 0;
}
