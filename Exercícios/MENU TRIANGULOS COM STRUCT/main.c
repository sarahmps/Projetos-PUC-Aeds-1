#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 100
int TAM = 0;

typedef struct{
    float L1;
    float L2;
    float L3;
}triangulo;

void lerTriangulo(triangulo t[])
{
    do{
        printf("\nLendo um triângulo\n\n");

        printf("\nDigite o lado A: ");
        scanf("%f", &t[TAM].L1);

        printf("\nDigite o lado B: ");
        scanf("%f", &t[TAM].L2);

        printf("\nDigite o lado C: ");
        scanf("%f", &t[TAM].L3);

        if(t[TAM].L1 >= t[TAM].L2 + t[TAM].L3 ||
        t[TAM].L2 >= t[TAM].L1 + t[TAM].L3 ||
        t[TAM].L3 >= t[TAM].L1 + t[TAM].L2)
        {
            printf("\n\aTriângulo inválido!\n");
        }
    }while(t[TAM].L1 >= t[TAM].L2 + t[TAM].L3 ||
        t[TAM].L2 >= t[TAM].L1 + t[TAM].L3 ||
        t[TAM].L3 >= t[TAM].L1 + t[TAM].L2);
}

void numEquilateros(triangulo t[])
{
    int equilateros = 0;
    for(int i = 0; i < TAM; i++)
    {
        if(t[i].L1 == t[i].L2 && t[i].L2 == t[i].L3)
        {
            equilateros++;
        }
    }
    printf("\nHá %d triângulos equiláteros!\n", equilateros);
}

void numIsosceles(triangulo t[])
{
    int isosceles = 0;
    for(int i = 0; i < TAM; i++)
    {
        if((t[i].L1 == t[i].L2 || t[i].L2 == t[i].L3 || t[i].L3 == t[i].L1)
            && !(t[i].L1 == t[i].L2 && t[i].L2 == t[i].L3))
        {
            isosceles++;
        }
    }
    printf("\nHá %d triângulos isósceles!\n", isosceles);
}

void numEscalenos(triangulo t[])
{
    int escalenos = 0;
    for(int i = 0; i < TAM; i++)
    {
        if(t[i].L1 != t[i].L2 && t[i].L2 != t[i].L3 && t[i].L3 != t[i].L1){
            escalenos++;
        }
    }
    printf("\nHá %d triângulos escalenos!\n", escalenos);
}

int main()
{
    setlocale(LC_ALL, "");
    triangulo t[MAX];

    int modo;
    do{
        printf("\n\tMENU DE TRIÂNGULOS\n\n0 - Sair do programa\n1 - Ler um triângulo\n2 - Calcular o número de triângulos equiláteros\n3 - Calcular o número de triângulos isósceles\n4 - Calcular o número de triângulos escalenos\n\n");
        scanf("%d", &modo);

        switch(modo){
            case 1:
                if(TAM >= MAX)
                {
                    printf("\n\aO vetor está cheio!\n");
                }else{
                    lerTriangulo(t);
                    TAM++;
                }
                break;
            case 2:
                if(TAM == 0) printf("\n\aAinda não foi informado nenhum triângulo!\n");
                else numEquilateros(t);
                break;
            case 3:
                if(TAM == 0) printf("\n\aAinda não foi informado nenhum triângulo!\n");
                else numIsosceles(t);
                break;
            case 4:
                if(TAM == 0) printf("\n\aAinda não foi informado nenhum triângulo!\n");
                else numEscalenos(t);
                break;
            case 0:
                printf("\nMuito obrigada por usar meu programa!\n");
                break;
            default:
                printf("\n\aOpção inválida!\n");
        }

    }while(modo != 0);
    return 0;
}
