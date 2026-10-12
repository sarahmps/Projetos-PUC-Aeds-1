#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void apresentacao()
{
    printf("\nO MAIOR NÚMERO PRIMO MENOR QUE M E O MENOR NÚMERO PRIMO MAIOR QUE M\n");
}

int lerM()
{
    int m;
    do{
        printf("\nDigite um número natural qualquer: ");
        scanf("%i", &m);
        if(m < 0){
            printf("\nValor inválido! Por favor digite um número maior ou igual a 0.\n");
        }
    }while(m < 0);
    return m;
}

void primo(int m, int *p1, int *p2)
{
    bool ERRO = true;
    int a = 2;
    while(a < m){
        int divisores = 0;
        for(int i = 2; i < a; i++){
            if(a % i ==0){
                divisores++;
            }
        }
        if(divisores == 0){
            *p1 = a;
            ERRO = false;
        }
        a++;
    }
    int b = m + 1;
    bool encontrado = false;
    while(!encontrado){
        int divisores = 0;
        for(int j = 2; j < b; j++){
            if(b % j == 0){
                divisores++;
            }
        }
        if(divisores == 0){
            *p2 = b;
            encontrado = true;
        }else{
            b++;
        }
    }
    if(ERRO){
        printf("\nNão existe um número primo que é menor do que %d.", m);
    }else{
        printf("\nO maior número primo que é menor que %d = %d", m, *p1);
    }
    printf("\nO menor número primo que é maior que %d = %d\n", m, *p2);
}


int main()
{
    setlocale(LC_ALL, "");
    apresentacao();
    int m = lerM();
    int *p1 = malloc(sizeof(int));
    int *p2 = malloc(sizeof(int));
    primo(m, p1, p2);
    return 0;
}
