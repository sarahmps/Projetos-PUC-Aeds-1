#include <stdio.h>
#include <stdlib.h>

int main()
{
    int SENHA;
    printf("\nDigite a senha de acesso: ");
    scanf("%d", &SENHA);
    if(SENHA == 2006)
    {
        printf("\nAcesso permitido.\n");
    }
    else
    {
        printf("\n\aERRO! Senha incorreta!\n");
    }

    return 0;
}
