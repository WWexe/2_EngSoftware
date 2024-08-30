package ex07;

public class Aluno {
    private String nome;
    private int matricula;
    private String curso;
    private 

    public Aluno(String nome, int matricula, String curso) {
        this.nome = nome;
        this.matricula = matricula;
        this.curso = curso;
    }

    @Override
    public String toString() {
        return "Aluno [nome=" + nome + ", matrícula=" + matricula + ", curso=" + curso + "]";
    }

    public String getNome() {
        return nome;
    }

    public int getMatricula() {
        return matricula;
    }

    public String getCurso() {
        return curso;
    }
}
