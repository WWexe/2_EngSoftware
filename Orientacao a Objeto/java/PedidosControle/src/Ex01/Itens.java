package Ex01;

public class Itens {
    private Integer id;
    private String nome;
    private double preco;
    private String descricao;

    public Itens(Integer id, String nome, String descricao) {
        this.id = id;
        this.nome = nome;
        this.preco = preco;
        this.descricao = descricao;
    }

    @Override
    public String toString() {
        return "Itens{" +
                "id=" + id +
                ", nome='" + nome + '\'' +
                ", preco=" + preco +
                ", descricao='" + descricao + '\'' +
                '}';
    }
    public Integer getId() {
        return id;
    }

    public String getNome() {
        return nome;
    }
    public Double getPreco() {
        return preco;
    }
    public String getDescricao() {
        return descricao;
    }
}
