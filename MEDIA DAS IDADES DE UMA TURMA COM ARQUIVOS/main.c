#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void lerIdades(char* nomeArq)
{
    FILE* arq = fopen(nomeArq, "w");
    int idade;
    do{
        printf("\nDigite a idade [0 encerra]: ");
        scanf("%d", &idade);
        if(idade > 0){
        fprintf(arq, "%d\n", idade);
        }
    }while(idade > 0);
    fclose(arq);
}

float mediaIdades(char* nomeArq)
{
    FILE* arq = fopen(nomeArq, "r");
    float media = 0;
    if(arq != NULL){
        int idade;
        int soma = 0;
        int c = 0;
        fscanf(arq, "%d", &idade);
        while(!feof(arq)){
            soma += idade;
            c++;
            fscanf(arq, "%d", &idade);
        }
        media = (float) soma / c;
    }
    fclose(arq);
    return media;
}

int acimaMedia(char* nomeArq, float media)
{
    FILE* arq = fopen(nomeArq, "r");
    int idade;
    int acima = 0;
    if(arq != NULL){
        fscanf(arq, "%d", &idade);
        while(!feof(arq)){
            if(idade > media){
                acima++;
            }
            fscanf(arq, "%d", &idade);
        }
    }
    fclose(arq);
    return acima;
}

int main()
{
    setlocale(LC_ALL, "");
    printf("\n\tMédia Das Idades De Uma Turma\n\n");
    lerIdades("Idades.txt");
    float media = mediaIdades("Idades.txt");
    int acima = acimaMedia("Idades.txt", media);
    printf("\nA média das idades dessa turma é: %f.", media);
    printf("\nE %d alunos estão acima dessa média.\n", acima);
    return 0;
}
