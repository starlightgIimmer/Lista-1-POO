#include <iostream>
#include <string>

using namespace std;

class Aluno 
{
    private:
    string nome;
    int matricula;
    string curso;

    public:
    Aluno(string nome, int matricula, string curso) : nome(nome), matricula(matricula), curso(curso) 
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

    void setNome(string novoNome) 
    {
        nome = novoNome;
    }

    void setMatricula(int novaMatricula) 
    {
        matricula = novaMatricula;
    }
    
    void setCurso(string novoCurso) 
    {
        curso = novoCurso;
    }
};

int main() 
{
    Aluno aluno("Pedro", 12345678, "Engenharia de Redes");
    cout << "Nome: " << aluno.getNome() << ", Matrícula: " << aluno.getMatricula() << ", Curso: " << aluno.getCurso();
    aluno.setNome("Gabriel");
    aluno.setMatricula(87654321);
    aluno.setCurso("Geologia");
    cout << "\nNome: " << aluno.getNome() << ", Matrícula: " << aluno.getMatricula() << ", Curso: " << aluno.getCurso();

    return 0;
}

