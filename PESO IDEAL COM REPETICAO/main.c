#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("\nPESO IDEAL\n");
    bool ERRO;
    char sexo;
    do{
        printf("\nDigite o sexo [M/F]: ");
        scanf(" %c", &sexo);
        ERRO = sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f';
        if(ERRO) printf("\n\aRESPOSTA NÃO PREVISTA!");
    }while(ERRO);
    float altura;
    do{
        printf("\nDigite a altura: ");
        scanf("%f", &altura);
        ERRO = altura <= 0 || altura > 3.0;
        if(ERRO){
            printf("\n\aALTURA INVÁLIDA!");
        }
    }while(ERRO);
    float peso;
    if(sexo == 'M' || sexo == 'm'){
        peso = (72.7 * altura) - 58;
    }
    else{
        peso = (62.7 * altura) - 44.7;
    }
    printf("\nSeu peso ideal é %f kg!\n", peso);
    return 0;
}
