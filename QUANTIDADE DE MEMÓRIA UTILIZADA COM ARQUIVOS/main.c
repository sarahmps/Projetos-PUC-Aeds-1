#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void leiaMemoria(char* nomeArq)
{
    FILE* arq = fopen(nomeArq, "w");
    int memoria;
    do{
        printf("\nDigite a quantidade de memória utilizada, em megabytes[0 encerra]: ");
        scanf("%i", &memoria);
        if(memoria > 0){
            fprintf(arq, "%i\n", memoria);
        }
    }while(memoria > 0);
    fclose(arq);
}

int quantMemoria(char* nomeArq)
{
    FILE* arq = fopen(nomeArq, "r");
    int quant = 0;
    int memoria;
    if(arq != NULL){
        fscanf(arq, "%d", &memoria);
        while(!feof(arq)){
            quant++;
            fscanf(arq, "%d", &memoria);
        }
    }
    fclose(arq);
    return quant;
}

int somaMemoria(char* nomeArq)
{
    int soma = 0;
    FILE* arq = fopen(nomeArq, "r");
    if(arq != NULL){
        int memoria;
        fscanf(arq, "%i", &memoria);
        while(!feof(arq)){
            soma += memoria;
            fscanf(arq, "%i", &memoria);
        }
    }
    fclose(arq);
    return soma;
}

float mediaMemoria(int soma, int quant)
{
    return (float) soma / quant;
}

int maiorMemoria(char* nomeArq)
{
    int maior = 0;
    FILE* arq = fopen(nomeArq, "r");
    if(arq != NULL){
        int memoria;
        fscanf(arq, "%i", &memoria);
        while(!feof(arq)){
            if(memoria > maior){
                maior = memoria;
            }
            fscanf(arq, "%i", &memoria);
        }
    }
    fclose(arq);
    return maior;
}

int menorMemoria(char* nomeArq, int soma)
{
    int menor = soma;
    FILE* arq = fopen(nomeArq, "r");
    if(arq != NULL){
        int memoria;
        fscanf(arq, "%i", &memoria);
        while(!feof(arq)){
            if(memoria < menor){
                menor = memoria;
            }
            fscanf(arq, "%i", &memoria);
        }
    }
    fclose(arq);
    return menor;
}

int acimaMedia(char* nomeArq, int media)
{
    int acima = 0;
    FILE* arq = fopen(nomeArq, "r");
    if(arq != NULL){
        int memoria;
        fscanf(arq, "%i", &memoria);
        while(!feof(arq)){
            if(memoria > media){
                acima++;
            }
            fscanf(arq, "%i", &memoria);
        }
    }
    fclose(arq);
    return acima;
}

int maiorAumento(char* nomeArq)
{
    int mAumento = 0;
    FILE* arq = fopen(nomeArq, "r");
    if(arq != NULL){
        int diferenca = 0;
        int aux = 0;
        int memoria;
        fscanf(arq, "%i", &memoria);
        while(!feof(arq)){
            fscanf(arq, "%i", &aux);
            diferenca = memoria - aux;
            if(abs(diferenca) > mAumento){
                mAumento = abs(diferenca);
            }
            memoria = aux;
        }
    }
    fclose(arq);
    return mAumento;
}

int main()
{
    setlocale(LC_ALL, "");
    printf("\n\tMedição Da Quantidade De Memória Utilizada\n\n");
    leiaMemoria("memoria.txt");
    int quant = quantMemoria("memoria.txt");
    int soma = somaMemoria("memoria.txt");
    float media = mediaMemoria(soma, quant);
    int maior = maiorMemoria("memoria.txt");
    int menor = menorMemoria("memoria.txt", soma);
    int acima = acimaMedia("memoria.txt", media);
    int mAumento = maiorAumento("memoria.txt");
    printf("\n\tRelatório Medições:\n");
    printf("\nA quantidade de medições realizadas = %d", quant);
    printf("\nO consumo médio de memória = %f", media);
    printf("\nO menor consumo registrado foi %d, e o maior consumo registrado foi %d.", menor, maior);
    printf("\nE %d medições apresentaram consumo superior à média.", acima);
    printf("\nO maior aumento de consumo entre duas medições consecutivas = %d.\n", mAumento);
    return 0;
}
