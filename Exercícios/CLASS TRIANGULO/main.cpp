#include <iostream>

using namespace std;

class triangulo{
private:
    float A;
    float B;
    float C;

public:
    bool setA(float A)
    {
        bool sucesso = false;
        if(A > 0)
        {
            this->A = A;
            sucesso = true;
        }
        return sucesso;
    }

    bool setB(float B)
    {
        bool sucesso = false;
        if(B > 0)
        {
            this->B = B;
            sucesso = true;
        }
        return sucesso;
    }

    bool setC(float C)
    {
        bool sucesso = false;
        if(C > 0)
        {
            this->C = C;
            sucesso = true;
        }
        return sucesso;
    }

    void setTriangulo(float A, float B, float C)
    {
        this->setA(A);
        this->setB(B);
        this->setC(C);
    }

    float getA()
    {
        return A;
    }

    float getB()
    {
        return B;
    }

    float getC()
    {
        return C;
    }

    float perimetro()
    {
        float p = getA() + getB() + getC();
        return p;
    }

    bool verificarTriangulo(float A, float B, float C)
    {
        bool ehTriangulo = false;
        if(A < B + C &&
           B < A + C &&
           C < A + B){
            ehTriangulo = true;
        }
        return ehTriangulo;
    }

    bool verificarEquilatero(float A, float B, float C)
    {
        bool equilatero = false;
        if(A == B && B == C)
        {
            equilatero = true;
        }
        return equilatero;
    }

    bool verificarIsosceles(float A, float B, float C)
    {
        bool isosceles = false;
        if(A == B || B == C || C == A
            && !(A == B && B == C)){
            isosceles = true;
        }
        return isosceles;
    }

    bool verificarEscaleno(float A, float B, float C)
    {
        bool escaleno = false;
        if(A != B && B != C && C != A){
            escaleno = true;
        }
        return escaleno;
    }

    void leiaTriangulo()
    {
        float a, b, c;
        do{
            printf("\nDigite os lados do triangulo(L1, L2, L3): ");
            scanf("%f, %f, %f", &a, &b, &c);
            if((a <= 0 || b <= 0 || c <= 0))
            {
                printf("\n\aValores invalidos!\n");
            }
        }while(a <= 0 || b <= 0 || c <= 0);
        if(verificarTriangulo(a, b, c))
        {
            setA(a);
            setB(b);
            setC(c);
        }
    }

    void escreveTriangulo()
    {
        printf("\nLado 1 = %f\nLado 2 = %f\nLado 3 = %f\nPerimetro = %f\n", getA(), getB(), getC(), perimetro());
    }

    void escreveEquilateros()
    {
        if(verificarEquilatero(getA(), getB(), getC()))
        {
            escreveTriangulo();
        }
    }
};

int main()
{
    printf("\n\tClasse de Triangulos\n\n");
    triangulo T1, T2, T3;

    printf("\nLendo o triangulo 1:\n");
    T1.leiaTriangulo();
    printf("\nLendo o triangulo 2:\n");
    T2.leiaTriangulo();
    printf("\nLendo o triangulo 3:\n");
    T3.leiaTriangulo();

    printf("\nEscrevendo o triangulo 1:\n");
    T1.escreveTriangulo();
    printf("\nEscrevendo o triangulo 2:\n");
    T2.escreveTriangulo();
    printf("\nEscrevendo o triangulo 3:\n");
    T3.escreveTriangulo();

    printf("\nTriangulos equilateros:\n");
    T1.escreveEquilateros();
    T2.escreveEquilateros();
    T3.escreveEquilateros();
    return 0;
}

