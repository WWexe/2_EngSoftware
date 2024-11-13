package ex19;

public class LivroDigital {
    private String titulo;
    private String autor;
    private double tamanhoArquivo;
    private boolean aberto;

    public LivroDigital(String titulo, String autor, double tamanhoArquivo) {
        this.titulo = titulo;
        this.autor = autor;
        this.tamanhoArquivo = tamanhoArquivo;
        this.aberto = false;
    }

    public void abrirLivro() {
        if (!aberto) {
            aberto = true;
            System.out.println("O livro '" + titulo + "' foi aberto.");
        } else {
            System.out.println("O livro já está aberto.");
        }
    }

    public void fecharLivro() {
        if (aberto) {
            aberto = false;
            System.out.println("O livro '" + titulo + "' foi fechado.");
        } else {
            System.out.println("O livro não está aberto.");
        }
    }

    public String getTitulo() {
        return titulo;
    }

    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }

    public String getAutor() {
        return autor;
    }

    public void setAutor(String autor) {
        this.autor = autor;
    }

    public double getTamanhoArquivo() {
        return tamanhoArquivo;
    }

    public void setTamanhoArquivo(double tamanhoArquivo) {
        this.tamanhoArquivo = tamanhoArquivo;
    }
}
