#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("\n\tNotas de uma turma\n");
    float nota, soma = 0;
    int aprovados = 0;
    int reprovados = 0;
    float maior = 0;
    float menor = 100;

    do{
        printf("\nDigite uma nota, valor negativo encerra: ");
        scanf("%f", &nota);
        if(nota > 100) printf("\n\aValor inválido! Digite uma nota de 0 a 100!\n");
        if(nota >= 0 && nota <= 100){
            soma += nota;
            if(nota > maior){
                maior = nota;
            }
            if(nota < menor){
                menor = nota;
            }
            if(nota >= 60){
                aprovados++;
            }else{
                reprovados++;
            }
        }
    }while(nota >= 0);
    float perAprov = (aprovados * 100) / (aprovados + reprovados);
    float perReprov = (reprovados * 100) / (aprovados + reprovados);
    float media = soma / (aprovados + reprovados);
    printf("\nA porcentagem de alunos aprovados é de %.2f%%, enquanto a de reprovados é %.2f%%!\nA maior nota da turma é %.2f, já a menor é %.2f.\nA nota média dessa turma foi %.2f!\n", perAprov, perReprov, maior, menor, media);
    return 0;
}

