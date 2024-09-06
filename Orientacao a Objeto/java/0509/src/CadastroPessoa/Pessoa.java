package CadastroPessoa;

import java.util.List;

public class Pessoa {
    private String nome;
    private int idade;
    private List<Endereco> enderecos;

    public Pessoa(String nome, int idade, List<Endereco> enderecos) {
        this.nome = nome;
        this.idade = idade;
        this.enderecos = enderecos;
    }

    public String getNome() {
        return nome;
    }

    public int getIdade() {
        return idade;
    }

    public List<Endereco> getEnderecos() {
        return enderecos;
    }
}
