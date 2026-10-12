#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LCL_ALL, "");
    printf("\tFaixas Etárias\n");
    int id1, id2, id3, id4, id5, id6, id7, id8;
    printf("Digite a idade da primeira pessoa: ");
    scanf("%i", &id1);
    for(x = id1; x <= 15; x++){
        printf("Há %i pessoas na primeira faixa etária (até 15 anos).", x);
    }
    return 0;
}
