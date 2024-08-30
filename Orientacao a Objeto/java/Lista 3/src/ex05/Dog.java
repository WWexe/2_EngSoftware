package ex05;

public class Dog {
    private String nome;
    private String raca;
    private int idade;
    private boolean parado;
    private boolean latir;

    public Dog(String nome, String raca, int idade) {
        this.nome = nome;
        this.raca = raca;
        this.idade = idade;
        this.parado = true;
        this.latir = false;
    }

    @Override
    public String toString() {
        return "Nome: " + nome + " Raca: " + raca + " Idade: " + idade + " Parado: " + parado;
    }

    public void parar() {
        if(!parado) {
            parado = true;
            System.out.println("O cachorro agora está Parado!");
        } else {
            System.out.println("O cachorro já está Parado!");
        }
    }
    public void correr() {
        if (parado) {
            parado = false;
            System.out.println("O cachorro agora está Correndo!");
        } else {
            System.out.println("O cachorro já está Correndo!");
        }
    }
    public void latir() {
        if (!latir) {
            latir = true;
            System.out.println("O cachorro agora está Latindo!");
        } else {
            System.out.println("O cachorro já está Latindo");
        }
    }
    public void pararLatir() {
        if (latir) {
            latir = false;
            System.out.println("O cachorro agora parou de Latir");
        } else {
            System.out.println("O cachorro já não está Latindo");
        }
    }

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
    public boolean isLatir() {
        return latir;
    }
}
