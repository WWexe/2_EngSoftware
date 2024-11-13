package ex16;

public class Loja {
    private String nome;
    private String endereco;
    private String telefone;
    private boolean aberta;

    public Loja(String nome, String endereco, String telefone) {
        this.nome = nome;
        this.endereco = endereco;
        this.telefone = telefone;
        this.aberta = false;
    }

    public void abrirLoja() {
        if (!aberta) {
            aberta = true;
            System.out.println("A loja '" + nome + "' foi aberta.");
        } else {
            System.out.println("A loja já está aberta.");
        }
    }

    public void fecharLoja() {
        if (aberta) {
            aberta = false;
            System.out.println("A loja '" + nome + "' foi fechada.");
        } else {
            System.out.println("A loja já está fechada.");
        }
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getEndereco() {
        return endereco;
    }

    public void setEndereco(String endereco) {
        this.endereco = endereco;
    }

    public String getTelefone() {
        return telefone;
    }

    public void setTelefone(String telefone) {
        this.telefone = telefone;
    }
}

