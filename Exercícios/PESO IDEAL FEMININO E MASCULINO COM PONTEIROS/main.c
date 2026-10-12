#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void apresentacao()
{
    printf("\n\tPeso Ideal\n");
}

char leiaSexo()
{
    char *S = malloc(sizeof(char));
    do{
        printf("\nDigite o sexo[M/F]: ");
        scanf("%c", S);
        if(*S != 'M' && *S != 'F' && *S != 'm' && *S != 'f'){
            printf("\n\aResposta não prevista! Por favor digite 'M' para masculino ou 'F' para feminino.\n");
        }
    }while(*S != 'M' && *S != 'F' && *S != 'm' && *S != 'f');
    return *S;
}

float leiaAltura()
{
    float *A = malloc(sizeof(float));
    do{
        printf("\nDigite a Altura: ");
        scanf("%f", A);
        if(*A <= 0 || *A >= 3.0){
            printf("\n\aAltura inválida!\n");
        }
    }while(*A <= 0 || *A >= 3.0);
    return *A;
}

float pesoIdeal(char *S, float *A)
{
    float *P = malloc(sizeof(float));
    if(*S == 'M' || *S == 'm'){
        *P = (72.7 * *A) - 58;
    }else{
        *P = (62.1 * *A) - 44.7;
    }
    return *P;
}

void resultado(float *P)
{
    printf("\nO seu peso ideal = %fKg\n", *P);
}

int main()
{
    setlocale(LC_ALL, "");
    apresentacao();
    char sexo = leiaSexo();
    float altura = leiaAltura();
    float peso = pesoIdeal(&sexo, &altura);
    resultado(&peso);
    return 0;
}
