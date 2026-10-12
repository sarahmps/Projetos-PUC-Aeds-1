#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("\n\tAPROVADO OU NÃO\n");
    int num_alunos, cont, aprovados, reprovados;
    float n_media, media, nota, p_aprovados, p_reprovados;
    printf("\nInforme o número de alunos na turma: ");
    scanf("%d", &num_alunos);
    aprovados == 0;
    reprovados == 0;
    for(cont = 1; cont <= num_alunos ; cont++){
        printf("\nAluno%d:\nInforme a sua nota[0..100]: ", cont);
        scanf("%f", &nota);
            if(nota >= 60){
                printf("\nAPROVADO!\n");
                aprovados++;
            }else{
                printf("\nREPROVADO!\n");
                reprovados++;
            }
        n_media += nota;
    }
    media = (n_media) / num_alunos;
    p_aprovados = (aprovados * 100)/num_alunos;
    p_reprovados = (reprovados * 100)/num_alunos;
    printf("\nA média da turma = %f", media);
    printf("\nA turma apresentou %f%% aprovados e %f%% reprovados!", p_aprovados, p_reprovados);
    return 0;
}
