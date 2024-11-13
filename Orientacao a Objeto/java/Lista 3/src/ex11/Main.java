package ex11;

public class Main {
    public static void main(String[] args) {
        Cidade cidade1 = new Cidade("Toledo", 100000, "Paraná");

        cidade1.aumentarPopulacao(5000);
        System.out.println(cidade1.getNome() + " tem " + cidade1.getPopulacao() + " habitantes.");

        cidade1.diminuirPopulacao(2000);
        System.out.println(cidade1.getNome() + " tem " + cidade1.getPopulacao() + " habitantes.");

        cidade1.diminuirPopulacao(105000);
    }
}

