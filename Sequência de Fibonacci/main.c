#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("\n\tSequência de Fibonacci\n");
    int n;
    do{
        printf("\nDigite o número de termos que você gostaria de ver : ");
        scanf("%d", &n);
    }while(n < 0);
    int A = 0;
    int B = 1;
    printf("\n%d, %d", A, B);
    //C = A + B;
    for(int i = 3; i <= n; i++){
        int C = A + B;
        A = B;
        B = C;
        printf(", %d", C);
    }
    printf(".\n");
    return 0;
}
