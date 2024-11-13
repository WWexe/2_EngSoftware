package ex15;

public class Jogo {
    private String nome;
    private String genero;
    private double preco;
    private boolean emExecucao;

    public Jogo(String nome, String genero, double preco) {
        this.nome = nome;
        this.genero = genero;
        this.preco = preco;
        this.emExecucao = false;
    }

    public void iniciarJogo() {
        if (!emExecucao) {
            emExecucao = true;
            System.out.println("O jogo '" + nome + "' foi iniciado.");
        } else {
            System.out.println("O jogo já está em execução.");
        }
    }

    public void pausarJogo() {
        if (emExecucao) {
            emExecucao = false;
            System.out.println("O jogo '" + nome + "' foi pausado.");
        } else {
            System.out.println("O jogo não está em execução.");
        }
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getGenero() {
        return genero;
    }

    public void setGenero(String genero) {
        this.genero = genero;
    }

    public double getPreco() {
        return preco;
    }

    public void setPreco(double preco) {
        this.preco = preco;
    }
}

