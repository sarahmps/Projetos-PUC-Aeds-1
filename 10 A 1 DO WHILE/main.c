#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\tINTEIROS DE 10 A 1:\n");
    int X;
    X = 10;
    do{
        printf("\n%d \n", X);
        X = X - 1;
    }while(X >= 1);
    return 0;
}
