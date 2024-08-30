package ex05;

public class Dog {
    private String nome;
    private String raca;
    private int idade;
    private boolean parado;

    public Dog(String nome, String raca, int idade) {
        this.nome = nome;
        this.raca = raca;
        this.idade = idade;
        this.parado = true;
    }

    @Override
    public String toString() {
        return "Nome:" nome + "Raca" + raca + "Idade" + idade + "Parado:" + parado;
    }

    public void parar()

    public String getNome() {
        return nome;
    }
    public String getRaca() {
        return raca;
    }
    public int getIdade() {
        return idade;
    }
    public boolean isParado() {
        return parado;
    }
}
