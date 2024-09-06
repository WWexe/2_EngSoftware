package CadastroLivro;

public class Livro {
    private String titulo;
    private Integer isbn;
    private String autor;

    public Livro(String titulo, Integer isbn, String autor) {
        this.titulo = titulo;
        this.isbn = isbn;
        this.autor = autor;
    }
    public String getTitulo() {
        return titulo;
    }
    public Integer getIsbn() {
        return isbn;
    }
    public String getAutor() {
        return autor;
    }
}