#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("\n\tNÚMEROS POSITIVOS, NEGATIVOS E IGUAIS A ZERO\n");
    float n;
    int positivos = 0, negativos = 0, zero = 0;
    do{
        printf("\nDigite um número inteiro (999 para encerrar): ");
        scanf("%f", &n);
        if(n != 999){
            if(n > 0){
                positivos++;
            }else if(n < 0){
                negativos++;
            }else{
                zero++;
            }
        }
    }while(n != 999);
    printf("\nEntre os números digitados, %d são positivos, %d são negativos, e %d são iguais a 0!\n", positivos, negativos, zero);
    return 0;
}
