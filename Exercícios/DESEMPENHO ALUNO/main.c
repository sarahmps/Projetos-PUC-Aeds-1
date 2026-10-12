#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Desempenho nas provas\n");
    int NOTA;
    printf("\nDigite a sua nota: ");
    scanf("%d", &NOTA);
    if(100 >= NOTA && NOTA >= 90){
        printf("\nParabens aluno! Seu desempenho na prova final = A\n");
    }else if(89 >= NOTA && NOTA >= 80){
        printf("\nSeu desempenho na prova final = B\n");
    }else if(79 >= NOTA && NOTA >= 70){
        printf("\nSeu desempenho na prova final = C\n");
    }else if(69 >= NOTA && NOTA >= 60){
        printf("\nSeu desempenho na prova final = D\n");
    }else{
        printf("\nSeu desempenho na prova final = E\n");
    }
    return 0;
}
