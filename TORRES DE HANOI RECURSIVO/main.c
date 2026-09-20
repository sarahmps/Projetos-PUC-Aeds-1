#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void apresentacao()
{
    printf("\n\tTorres De Hanói\n");
}

int lerN()
{
    int n;
    do{
        printf("\nDigite o número de discos: ");
        scanf("%d", &n);
        if(n <= 0){
            printf("\n\aValor inválido! Por favor digite um número maior que 0.\n");
        }
    }while(n <= 0);
    return n;
}

int torresDeHanoi(int n, int pinoInicial, int pinoDestino, int pinoTemporario)
{
    if(n == 1){
        printf("Disco %d: %d --> %d\n", n, pinoInicial, pinoDestino);
    }else if(n > 1){
        torresDeHanoi(n - 1, pinoInicial, pinoTemporario, pinoDestino);
        printf("Disco %d: %d --> %d\n", n, pinoInicial, pinoDestino);
        torresDeHanoi(n - 1, pinoTemporario, pinoDestino, pinoInicial);
    }else{
        return 0;
    }
}

int main()
{
    setlocale(LC_ALL, "");
    apresentacao();
    int n = lerN();
    int pinoInicial = 1;
    int pinoTemporario = 2;
    int pinoDestino = 3;
    torresDeHanoi(n, pinoInicial, pinoDestino, pinoTemporario);
    return 0;
}
