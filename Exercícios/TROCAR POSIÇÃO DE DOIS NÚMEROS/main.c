#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void apresentacao()
{
    printf("\nTROCA DE POSIÇÃO ENTRE DOIS NÚMEROS!\n");
}
float lerValor()
{
    float x;
    printf("\nDigite um número qualquer: ");
    scanf("%f", &x);
    return x;
}
float troca(float *x, float *y)//O * utiliza o endereço de a e b para trazer o resultado de x e y na posicao da memoria de a e de b!
{
    float aux;
    aux = *x;
    *x = *y;
    *y = aux;
}
int main()
{
    setlocale(LC_ALL, "");
    apresentacao();
    float A = lerValor();
    float B = lerValor();
    troca(&A, &B);//O & leva a posição de memória da variável ao invés de seu valor!
    printf("\nRESULTADO: %.2f e %.2f\n", A, B);
    return 0;
}
