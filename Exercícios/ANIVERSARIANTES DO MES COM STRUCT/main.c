#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 100
#define MAX_STR 50
int TAM = 0;

typedef struct{
    int dia;
    int mes;
    int ano;
}data;

typedef struct{
    char nome[MAX_STR];
    data dataNascimento;
}pessoa;

void limparBuffer()
{
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}


void lerPessoas(pessoa PESSOAS[])
{
    int n;
    printf("\nQuantidade de pessoas cadastradas: ");
    scanf("%d", &n);
    limparBuffer();

    for(int i = 0; i < n; i++)
    {
        printf("\n\tCadastrando a pessoa %i:\n\n", i+1);

        printf("\nDigite o nome: ");
        fgets(PESSOAS[i].nome, MAX_STR, stdin);

        printf("\nDigite a data de nascimento[dd/mm/aa]: ");
        scanf("%d/%d/%d",
              &PESSOAS[i].dataNascimento.dia,
              &PESSOAS[i].dataNascimento.mes,
              &PESSOAS[i].dataNascimento.ano);
        limparBuffer();

        TAM++;
    }
}

void aniversariantesMes(pessoa PESSOAS[], int m)
{
    int aniversariantes = 0;
    for(int i = 0; i < TAM; i++)
    {
        if(m == PESSOAS[i].dataNascimento.mes)
        {
            printf("\nNome: %s", PESSOAS[i].nome);
            printf("\nAniversário: %d/%d/%d\n",
                   PESSOAS[i].dataNascimento.dia,
                   PESSOAS[i].dataNascimento.mes,
                   PESSOAS[i].dataNascimento.ano);
            aniversariantes++;
        }
    }
    if(aniversariantes == 0)
    {
        printf("\nNenhum aniversariante neste mês!\n");
    }
}

int main()
{
    setlocale(LC_ALL, "");
    printf("\n\tAniversariantes do mês\n\n");

    pessoa PESSOAS[MAX];
    lerPessoas(PESSOAS);

    int m;
    do{
        printf("\nDigite o mês para verificar aniversariantes[1 a 12]: ");
        scanf("%d", &m);
        if(m < 1 || m > 12){
            printf("\n\aMês inválido!\n");
        }
    }while(m < 1 || m > 12);

    printf("\n\tANIVERSARIANTES DO MÊS:\n\n");
    aniversariantesMes(PESSOAS, m);
    return 0;
}
