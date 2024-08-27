package ex01;

public class Livro {
    public String titulo;
    public String autor;
    public boolean livroAberto;
    public int paginaAtual;
    public int numeroDePaginas;

    public Livro(String titulo, String autor, int numeroDePaginas) {
        this.titulo = titulo;
        this.autor = autor;
        this.numeroDePaginas = numeroDePaginas;
        this.paginaAtual = 0;
        this.livroAberto = false;
    }

    @Override
    public String toString() {
        return "titulo: " + titulo + ", autor: " + autor + ", numero de Paginas: " + numeroDePaginas;
    }

    public void abrirLivro() {
        if (!livroAberto) {
            livroAberto = true;
            System.out.println("Livro aberto!");
        } else {
            System.out.println("O livro já está aberto!");
        }
    }

    public void lerPagina() {
        if (livroAberto) {
            if (paginaAtual < numeroDePaginas) {
                paginaAtual++;
                System.out.println("Lendo a Página " + paginaAtual);
            } else {
                System.out.println("Você já leu todas as páginas.");
            }
        } else {
            System.out.println("O livro está fechado, abra o livro primeiro.");
        }
    }
}
