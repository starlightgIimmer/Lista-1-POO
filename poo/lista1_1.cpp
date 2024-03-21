#include <iostream>
#include <string>

using namespace std;

class Agenda 
{
    private:
    int numeroPrivado;
    string nomePrivado;
    
    public:
    
    void definirNomePrivado(string nome) 
    {
        nomePrivado = nome;
    }

    void imprimirNomePrivado() 
    {
        cout << "O nome anotado na agenda é: " << nomePrivado<< ".";
    }
    
    void definirNumeroPrivado(int numero) 
    {
        numeroPrivado = numero;
    }

    void imprimirNumeroPrivado() 
    {
        cout << "\nE o número de telefone é: " << numeroPrivado<<".";
    }
};

int main() 
{
    Agenda myAgenda;

    myAgenda.definirNomePrivado("Pedro");
    
    myAgenda.imprimirNomePrivado();;
    
    myAgenda.definirNumeroPrivado(123456789);

    myAgenda.imprimirNumeroPrivado();

    return 0;
}

