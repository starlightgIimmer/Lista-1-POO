#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Pessoa 
{
private:
    string nome;
    string telefone;
    int idade;
    string tipoSanguineo;

public:
    Pessoa(string _nome, string _telefone, int _idade, string _tipoSanguineo) 
        : nome(_nome), telefone(_telefone), idade(_idade), tipoSanguineo(_tipoSanguineo) {}

    string getNome() const 
    {
        return nome;
    }

    void setNome(string novoNome) 
    {
        nome = novoNome;
    }

    string getTelefone() const 
    {
        return telefone;
    }

    void setTelefone(string novoTelefone) 
    {
        telefone = novoTelefone;
    }

    int getIdade() const 
    {
        return idade;
    }

    void setIdade(int novaIdade) 
    {
        idade = novaIdade;
    }

    string getTipoSanguineo() const 
    {
        return tipoSanguineo;
    }

    void setTipoSanguineo(string novoTipoSanguineo) 
    {
        tipoSanguineo = novoTipoSanguineo;
    }
};

int main() 
{
    Pessoa pessoa1("Joao", "123456789", 30, "A+");
    Pessoa pessoa2("Maria", "987654321", 25, "O-");
    Pessoa pessoa3("Pedro", "456789123", 40, "AB+");
    Pessoa pessoa4("Ana", "321654987", 35, "O-");
    Pessoa pessoa5("Marcos", "456321789", 28, "O-");

    vector<Pessoa> doadoresUniversais;

    if (pessoa1.getTipoSanguineo() == "O-") doadoresUniversais.push_back(pessoa1);
    if (pessoa2.getTipoSanguineo() == "O-") doadoresUniversais.push_back(pessoa2);
    if (pessoa3.getTipoSanguineo() == "O-") doadoresUniversais.push_back(pessoa3);
    if (pessoa4.getTipoSanguineo() == "O-") doadoresUniversais.push_back(pessoa4);
    if (pessoa5.getTipoSanguineo() == "O-") doadoresUniversais.push_back(pessoa5);

    cout << "Doadores Universais:" << endl;
    for (const auto& doador : doadoresUniversais) {
        cout << "Nome: " << doador.getNome() << ", Telefone: " << doador.getTelefone()
             << ", Idade: " << doador.getIdade() << ", Tipo Sanguineo: " << doador.getTipoSanguineo();
    }

    return 0;
}
