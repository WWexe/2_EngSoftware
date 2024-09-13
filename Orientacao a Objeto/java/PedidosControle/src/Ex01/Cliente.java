package Ex01;

import java.util.List;

public class Cliente {
    private String nome;
    private String cpf;
    private Integer idade;
    private List<EnderecoCliente> enderecos;

    public Cliente(String nome, String cpf, Integer idade, List<EnderecoCliente> enderecos) {
        this.nome = nome;
        this.cpf = cpf;
        this.idade = idade;
        this.enderecos = enderecos;
    }

    @Override
    public String toString() {
        return "Cliente{" +
                "nome='" + nome + '\'' +
                ", cpf='" + cpf + '\'' +
                ", idade=" + idade +
                ", enderecos=" + enderecos +
                '}';
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getCpf() {
        return cpf;
    }

    public void setCpf(String cpf) {
        this.cpf = cpf;
    }

    public Integer getIdade() {
        return idade;
    }

    public void setIdade(Integer idade) {
        this.idade = idade;
    }

    public List<EnderecoCliente> getEnderecos() {
        return enderecos;
    }

    public void setEnderecos(List<EnderecoCliente> enderecos) {
        this.enderecos = enderecos;
    }
}