#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("MAIORIDADE\n");
    int IDADE;
    printf("Digite a sua idade: ");
    scanf("%d", &IDADE);
    if(IDADE >= 18){
        printf("\n EH MAIOR DE IDADE!\n");
    }else{
        printf("\n NAO EH MAIOR DE IDADE!\n");
    }
    return 0;
}
