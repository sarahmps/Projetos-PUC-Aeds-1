#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("APROVADO OU REPROVADO\n");
    float n1, n2, n3, n4;
    printf("\nDigite a sua primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a sua segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a sua terceira nota: ");
    scanf("%f", &n3);
    printf("Digite a sua quarta nota: ");
    scanf("%f", &n4);
    float media = (n1 + n2 + n3 + n4) / 4;
    if(media >= 7){
        printf("\nSituacao: APROVADO!");
    }
    else{
        printf("\nSituacao: REPROVADO!");
    }
    return 0;
}
