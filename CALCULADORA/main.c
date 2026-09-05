#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("\n\tCALCULADORA\n");
    float v1, v2;
    int operacao;
    do{
    printf("\n0 - SAIR DO PROGRAMA\n1 - SOMA\n2 - SUBTRAÇÃO\n3 - MULTIPLICAÇÃO\n4 - DIVISÃO\n");
    printf("\nSelecione a operação que deseja realizar, seguindo o menu acima: ");
    scanf("%d", &operacao);
    if(operacao != 0){
        printf("\nInforme o primeiro número: ");
        scanf("%f", &v1);
        printf("\nInforme o segundo número: ");
        scanf("%f", &v2);
    }
    float R;
    switch(operacao)
    {
    case 0:
        printf("\nObrigado por usar este programa!\n");
        break;
    case 1:
        R = v1 + v2;
        break;
    case 2:
        R = v1 - v2;
        break;
    case 3:
        R = v1 * v2;
        break;
    case 4:
        R = (v1)/(v2);
        break;
    default:
        printf("\n\aOpção Inválida!\n");
    }
    printf("\nResultado da operação = %f ", R);}while(operacao != 0);
    return 0;
}
