#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void apresentacao()
{
    printf("\n\tNúmero Palíndromo Ou Não?\n");
}

int lerNum()
{
    int num;
    do{
        printf("\nDigite um número natural: ");
        scanf("%d", &num);
        if(num < 0){
            printf("\nValor inválido! Por favor digite um número maior ou igual a 0.\n");
        }
    }while(num < 0);
    return num;
}

bool palindromo(int num)
{
    int invertido = 0;
    int x = num;
    while(x > 0){
        invertido = (invertido * 10) + (x % 10);
        x = x/10;
    }
    if(num == invertido){
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
    int num = lerNum();
    bool pal = palindromo(num);
    resultado(num, pal);
    return 0;
}
