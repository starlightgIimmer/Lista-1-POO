#include <iostream>
#include <string>

using namespace std;

class Aluno 
{
    private:
    string nome;
    int matricula;
    string curso;
    float notas;
    int faltas;

    public:
    Aluno(string nome, int matricula, string curso) : nome(nome), matricula(matricula), curso(curso), notas(0), faltas(0) 
    {}

    string getNome() const 
    {
        return nome;
    }

    int getMatricula() const 
    {
        return matricula;
    }
    
    string getCurso() const
    {
        return curso;
    }
    
    float getNotas() const 
    {
        return notas;
    }

    int getFaltas() const 
    {
        return faltas;
    }

    void atribuirNotas(float novaNotas) 
    {
        notas = novaNotas;
    }

    void atribuirFaltas(int novasFaltas) 
    {
        faltas = novasFaltas;
    }
};

int main() 
{
    Aluno aluno1("Pedro", 12345678, "Engenharia de Redes");
    Aluno aluno2("Gabriel", 87654321, "Geologia");
    
    aluno1.atribuirNotas(9.2);
    aluno1.atribuirFaltas(2);
    
    aluno2.atribuirNotas(8.7);
    aluno2.atribuirFaltas(3);
    
    cout << "Nome: " << aluno1.getNome() << ", Matrícula: " << aluno1.getMatricula() << ", Curso: " << aluno1.getCurso() << ", Nota: "<< aluno1.getNotas() << ", Faltas: "<< aluno1.getFaltas()<<".";
    
    cout << "\nNome: " << aluno2.getNome() << ", Matrícula: " << aluno2.getMatricula() << ", Curso: " << aluno2.getCurso() << ", Nota: "<< aluno2.getNotas() << ", Faltas: "<< aluno2.getFaltas()<<".";

    return 0;
}
