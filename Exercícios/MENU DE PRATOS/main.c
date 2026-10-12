#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("\nFAÇA O SEU PEDIDO!\n\nMENU:\n\n1 - Hambúrguer\n2 - Pizza\n3 - Salada\n4 - Refrigerante\n");
    int prato;
    printf("\nEscolha um prato do menu acima: ");
    scanf("%d", &prato);
    switch(prato)
    {
case 1:
    printf("\nVocê escolheu Hambuger! Preço: R$19,00\n");
    break;
case 2:
    printf("\nVocê escolheu Pizza! Preço: R$40,00\n");
    break;
case 3:
    printf("\nVocê escolheu Salada! Preço: R$18,00\n");
    break;
case 4:
    printf("\nVocê escolheu Refrigerante! Preço: R$7,00\n");
    break;
default:
    printf("\n\aOpção de menu inálida!\n");
    }
    return 0;
}
