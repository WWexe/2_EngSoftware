package ex03;

public class testePessoa {
    public static void main(String[] args) {
        Pessoa pessoa = new Pessoa("MilanBuza", 18, 1.75);

        System.out.println("Nome: " + pessoa.getNome());
        System.out.println("Idade: " + pessoa.getIdade());
        System.out.println("Altura: " + pessoa.getAltura());
    }
}
