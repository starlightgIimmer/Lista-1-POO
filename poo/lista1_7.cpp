#include <iostream>
#include <cmath>
using namespace std;

class Complexo 
{
private:
    double real;
    double imaginario;

public:
    Complexo(double _real, double _imaginario) : real(_real), imaginario(_imaginario) {}

    double getReal() const 
    {
        return real;
    }

    double getImaginario() const 
    {
        return imaginario;
    }

    Complexo soma(const Complexo& outro) const 
    {
        return Complexo(real + outro.real, imaginario + outro.imaginario);
    }

    Complexo subtracao(const Complexo& outro) const {
        return Complexo(real - outro.real, imaginario - outro.imaginario);
    }

    Complexo multiplicacao(const Complexo& outro) const {
        double novoReal = real * outro.real - imaginario * outro.imaginario;
        double novoImaginario = real * outro.imaginario + imaginario * outro.real;
        return Complexo(novoReal, novoImaginario);
    }

    Complexo divisao(const Complexo& outro) const {
        double denominador = outro.real * outro.real + outro.imaginario * outro.imaginario;
        double novoReal = (real * outro.real + imaginario * outro.imaginario) / denominador;
        double novoImaginario = (imaginario * outro.real - real * outro.imaginario) / denominador;
        return Complexo(novoReal, novoImaginario);
    }

    Complexo raiz() const {
        double magnitude = sqrt(real * real + imaginario * imaginario);
        double argumento = atan2(imaginario, real);
        double novaMagnitude = sqrt(magnitude);
        double novoArgumento = argumento / 2.0;
        double novoReal = novaMagnitude * cos(novoArgumento);
        double novoImaginario = novaMagnitude * sin(novoArgumento);
        return Complexo(novoReal, novoImaginario);
    }

    Complexo potenciacao(double potencia) const {
        double magnitude = sqrt(real * real + imaginario * imaginario);
        double argumento = atan2(imaginario, real);
        double novaMagnitude = pow(magnitude, potencia);
        double novoArgumento = argumento * potencia;
        double novoReal = novaMagnitude * cos(novoArgumento);
        double novoImaginario = novaMagnitude * sin(novoArgumento);
        return Complexo(novoReal, novoImaginario);
    }

    void imprimir() const {
        cout << real << " + " << imaginario << "i" << endl;
    }
};

int main() 
{
    Complexo c1(3, 2);
    Complexo c2(1, -1);

    Complexo soma = c1.soma(c2);
    Complexo subtracao = c1.subtracao(c2);
    Complexo multiplicacao = c1.multiplicacao(c2);
    Complexo divisao = c1.divisao(c2);
    Complexo raiz = c1.raiz();
    Complexo potencia = c1.potenciacao(2);

    cout << "Soma: ";
    soma.imprimir();
    cout << "Subtracao: ";
    subtracao.imprimir();
    cout << "Multiplicacao: ";
    multiplicacao.imprimir();
    cout << "Divisao: ";
    divisao.imprimir();
    cout << "Raiz: ";
    raiz.imprimir();
    cout << "Potenciacao: ";
    potencia.imprimir();

    return 0;
}
