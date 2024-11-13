package ex12;

public class Filme {
    private String titulo;
    private String diretor;
    private int duracao;
    private boolean emExibicao;

    public Filme(String titulo, String diretor, int duracao) {
        this.titulo = titulo;
        this.diretor = diretor;
        this.duracao = duracao;
        this.emExibicao = false;
    }

    public void iniciarFilme() {
        if (!emExibicao) {
            emExibicao = true;
            System.out.println("O filme '" + titulo + "' foi iniciado.");
        } else {
            System.out.println("O filme já está em exibição.");
        }
    }

    public void pararFilme() {
        if (emExibicao) {
            emExibicao = false;
            System.out.println("O filme '" + titulo + "' foi parado.");
        } else {
            System.out.println("O filme não está em exibição.");
        }
    }

    public String getTitulo() {
        return titulo;
    }

    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }

    public String getDiretor() {
        return diretor;
    }

    public void setDiretor(String diretor) {
        this.diretor = diretor;
    }

    public int getDuracao() {
        return duracao;
    }

    public void setDuracao(int duracao) {
        this.duracao = duracao;
    }
}

