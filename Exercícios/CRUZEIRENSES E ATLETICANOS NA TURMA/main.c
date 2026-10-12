#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("\tPercentual de Cruzeirenses e de Atleticanos da turma\n");
    int time, num_cru, num_atle, outro_time, alunos_totais, cont;
    printf("\nInforme o número de alunos na turma: ");
    scanf("%d", &alunos_totais);
    for(cont = 1; cont <= alunos_totais; cont++){
        if(cont == 1){
            printf("\n\nConsiderando os times abaixo, responda a pergunta utilizando o número ao lado de cada opção:\n\n1 - CRUZEIRO\n2 - ATLETICO\n3 - OUTRO\n\nAluno 1:\nPara qual time você torce?");
        }else{
            printf("\n\nAluno %d:\nPara qual time você torce?", cont);
        }
        scanf("%d", &time);
        if(time == 1){
            printf("\nCruzeirense!");
            num_cru++;
        }else if(time == 2){
            printf("\nAtleticano!");
            num_atle++;
        }
    }
    float p_cru, p_atle;
    p_cru = (num_cru * 100)/ alunos_totais;
    p_atle = (num_atle * 100)/ alunos_totais;
    printf("\nA turma possui %.2f%% alunos cruzeirenses e %.2f%% alunos atleticanos!\n", p_cru, p_atle);//O '.2f%%', após o primeiro '%', é usado para mostrar apenas duas casas decimais (.2) e para mostrar o símbolo de porcentagem (%%)

    return 0;
}
