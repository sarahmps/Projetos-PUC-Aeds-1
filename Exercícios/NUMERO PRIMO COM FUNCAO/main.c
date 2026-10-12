#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void apresentacao()
{
    printf("\n\tNúmero Primo ou Não?\n");
}

int lerNum()
{
    int num;
    do{
        printf("\nDigite um número natural qualquer: ");
        scanf("%d", &num);
        if(num < 0){
            printf("\n\aNúmero inválido! Por favor digite um número maior ou igual a 0!\n");
        }
    }while(num < 0);
    return num;
}

bool primo(int num)
{
    bool PRIMO = true;
    int x = 2;
    if(num < 2){
        PRIMO = false;
    }
    while(x <= num/2){
        if (num % x == 0){
            PRIMO = false;
        }
        x++;
    }
    return PRIMO;
}

void resultado(int num, bool PRIMO)
{
    if(PRIMO == true){
        printf("\nO número %d é PRIMO!\n", num);
    }else{
        printf("\nO número %d NÃO é primo!\n", num);
    }
}

int main()
{
    setlocale(LC_ALL, "");
    apresentacao();
    int num = lerNum();
    bool PRIMO = primo(num);
    resultado(num, PRIMO);
    return 0;
}
