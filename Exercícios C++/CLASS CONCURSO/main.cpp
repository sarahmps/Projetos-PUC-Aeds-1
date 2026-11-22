#include <iostream>
#include <string>
#define _MAX 100

using namespace std;

class Candidato{
private:
    string nomeCandidato;
    double notaCandidato;

public:
    Candidato(const string& nome, double nota)
    {
        notaCandidato = 0;
        setNome(nome);
        setNota(nota);
    }

    void setNome(const string& nome)
    {
        nomeCandidato = nome;
    }

    void setNota(double nota)
    {
        if(nota >= 0)
        {
            notaCandidato = nota;
        }
    }

    string getNome() const
    {
        return nomeCandidato;
    }

    double getNota() const
    {
        return notaCandidato;
    }
};

int numeroCandidatos()
{
    int num, linha;
    do{
        cin >> linha >> num;
    }while(num <= 0 || num > _MAX);
    return num;
}


Candidato* criarCandidato()
{
    string nome;
    double nota;
    int linha;

    cin >> linha;
    cin >> ws;
    cin.ignore();
    getline(cin, nome, '"');
    cin >> nota;

    return new Candidato(nome, nota);
}

void lerCandidato(int num, Candidato* V[])
{
    for(int i = 0; i < num; i++)
    {
        V[i] = criarCandidato();
    }
}

double mediaNotas(Candidato* V[], int num)
{
    double soma = 0;

    for(int i = 0; i < num; i++)
    {
        soma += V[i]->getNota();
    }

    return soma / num;
}

void escreveCandidato(int linha, string nome, double nota)
{
    cout << linha << ' ' << '"' << nome << '"' << ' ' << nota << endl;
}

void acimaMedia(Candidato* V[], int num, double media)
{
    int linha = 1;
    for(int i = 0; i < num; i++)
    {
        if(V[i]->getNota() > media)
        {
            escreveCandidato(linha, V[i]->getNome(), V[i]->getNota());
            linha++;
        }
    }
    cout << linha << endl;
}

int main()
{
    Candidato* V[_MAX];

    int num = numeroCandidatos();
    lerCandidato(num, V);

    double media = mediaNotas(V, num);

    acimaMedia(V, num, media);
    return 0;
}
