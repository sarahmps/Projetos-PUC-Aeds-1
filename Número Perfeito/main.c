#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("\n\tNÚMERO PERFEITO\n");
    int num;
    int divisores = 0;
    do{
        printf("\nDigite um número natural qualquer: ");
        scanf("%i", &num);
    }while(num < 0);
    for(int i = 1; i < num; i++){
        if(num % i == 0){
            divisores += i;
        }
    }
    if(divisores == num){
        printf("\nO número %i é PERFEITO!\n", num);
    }
    else{
        printf("\nO número %i NÃO é perfeito!\n", num);
    }
    return 0;
}
