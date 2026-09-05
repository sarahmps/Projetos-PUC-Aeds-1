#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("CATEGORIA NATACAO\n");
    int idade;
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);
    switch(idade){
    case 1:
    case 2:
    case 3:
    case 4:
        printf("\n \a IDADE INVALIDA! \n");
        break;
    case 5:
    case 6:
    case 7:
        printf("\n MODALIDADE = INFANTIL \n");
        break;
    case 8:
    case 9:
    case 10:
        printf("\n MODALIDADE = JUVENIL \n");
        break;
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
        printf("\n MODALIDADE = ADOLESCENTE \n");
        break;
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
        printf("\n MODALIDADE = ADULTO \n");
        break;
    default:
        printf("\n MODALIDADE = SENIOR \n");
    }
    return 0;
}
