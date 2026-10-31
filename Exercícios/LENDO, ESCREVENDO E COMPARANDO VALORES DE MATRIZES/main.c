#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

const int MAX_LIN = 2;
const int MAX_COL = 4;

void leMatriz(float M[][MAX_COL])
{
    for(int i = 0; i < MAX_LIN; i++)
    {
        for(int j = 0; j < MAX_COL; j++)
        {
            printf("\nDigite um valor real qualquer: ");
            scanf("%f", &M[i][j]);
        }
    }
}

void escreveMatriz(float M[][MAX_COL])
{
// Varrendo as linhas da matriz
    for(int i = 0; i < MAX_LIN; i++)
    {
        // Para cada linha, varrendo suas colunas
        for(int j = 0; j < MAX_COL; j++)
        {
            printf( "\tM[%i][%i]= %f ", i , j , M[i][j]);
        }//fim for(j)
        // Ao finalizar todas as colunas, avançar uma linha também na tel a
        printf("\n");
    } //fim for( i )
}

bool matrizesIguais(float M1[][MAX_COL], float M2[][MAX_COL])
{
    bool iguais = true;
    int i = 0;
    while(iguais && i < MAX_LIN)
    {
        int j = 0;
        while(iguais && j < MAX_COL)
        {
            if(M1[i][j] != M2[i][j])
            {
                iguais = false;
            }
            j++;
        }
        i++;
    }
    return iguais;
}

int main()
{
    printf("\n\tLendo, Escrevendo E Comparando Duas Matrizes\n");
    float M1[MAX_LIN][MAX_COL];
    printf("\n\nLendo a primeira Matriz:\n");
    leMatriz(M1);

    float M2[MAX_LIN][MAX_COL];
    printf("\n\nLendo a segunda Matriz:\n");
    leMatriz(M2);

    printf("\n\nEscrevendo a primeira Matriz:\n");
    escreveMatriz(M1);

    printf("\n\nEscrevendo a segunda Matriz:\n");
    escreveMatriz(M2);

    if(matrizesIguais(M1, M2))
    {
        printf("\nMatrizes iguais!\n");
    }else{
        printf("\nMatrizes diferentes!\n");
    }
    return 0;
}
