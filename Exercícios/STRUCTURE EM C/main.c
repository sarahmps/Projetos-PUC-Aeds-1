#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX_STR 50
#define MAX 100
int TAM = 0;//tamanho aumenta de acordo com o número de usuários, é uma variável global, que será compilada
//Obs.: Se houver uma variável local e global com o mesmo nome, a preferência vai para a local!

typedef struct
    {
        int dia;
        int mes;
        int ano;
    }Data;//O nome do tipo é Data, dentro dela guarda dia, mes e ano para calcular a idade ao longo do tempo

typedef struct
    {
        char nome[MAX_STR];
        Data dataNascimento;
    }Pessoa;//O nome do tipo é Pessoa, dentro dela guarda o nome e a data de nascimento (do tipo Data)

void escrevaEstPessoa(Pessoa PESSOA)
{
    printf("\nNome: %s\n", PESSOA.nome);

    printf("\nData de nascimento: %d/%d/%d\n",
        PESSOA.dataNascimento.dia,
        PESSOA.dataNascimento.mes,
        PESSOA.dataNascimento.ano
    );
}

void escrevePessoa(Pessoa PESSOAS[], int i)
{
    escrevaEstPessoa(PESSOAS[i]);
    //OBS.: Dá para a função apenas uma estrutura
}

void cadastraPessoa(Pessoa PESSOAS[])
{
    fflush(stdin);
    printf("\nDigite o nome: ");
    fgets(PESSOAS[TAM].nome, MAX_STR, stdin);

    printf("\nData de nascimento [dd/mm/aa]: ");
    scanf("%d/%d/%d",
        &PESSOAS[TAM].dataNascimento.dia,
        &PESSOAS[TAM].dataNascimento.mes,
        &PESSOAS[TAM].dataNascimento.ano
    );
    TAM++;
}

int diasMes(Data data)
{
    int dias[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return dias[data.mes-1];
}

char* mesExtenso(Data data)
{
    char* mes[] = {"janeiro", "fevereiro", "março", "abril",
        "maio", "junho", "julho", "agosto",
        "setembro", "outubro", "novembro", "dezembro"};
    return mes[data.mes-1];
}

bool ehBissexto(Data data)
{
    bool bissexto = false;
    if((data.ano % 4 == 0 && data.ano % 100 != 0) || data.ano % 400 == 0)
    {
        bissexto = true;
    }
    return bissexto;
}

bool dataValida(Data data)
{
    bool valido = true;
    if(data.dia <= 0 || data.dia > 31)
    {
        valido = false;
    }
    if(data.mes <= 0 || data.mes > 12)
    {
        valido = false;
    }
    if(data.ano < 0)
    {
        valido = false;
    }
    return valido;
}

void escreveData(Data data)
{
    printf("\nData: %d/%d/%d\n",
        data.dia,
        data.mes,
        data.ano
    );
}

void leiaData(Data* data)
{
    printf("\ndd/mm/aa: ");
    scanf("%d/%d/%d",
          &data->dia,
          &data->mes,
          &data->ano//a seta(->)determina para onde aponta, caso o parametro seja um ponteiro
    );
}

int main()
{
    setlocale(LC_ALL, "");
    printf("\n\tData de nascimento do usuário\n\n");

    Data hoje;
    hoje.dia = 26;
    hoje.mes = 10;
    hoje.ano = 2026;
    escreveData(hoje);

    Data nascimento;
    leiaData(&nascimento);
    escreveData(nascimento);
    printf("\nO mês %s tem %d dias.\n",
           mesExtenso(nascimento),
           diasMes(nascimento));

    bool bissexto = ehBissexto(nascimento);
    if(bissexto){
        printf("\nO ano %d é bissexto!\n", nascimento.ano);
    }else{
        printf("\nO ano %d NÃO é bissexto!\n", nascimento.ano);
    }

    return 0;
}
