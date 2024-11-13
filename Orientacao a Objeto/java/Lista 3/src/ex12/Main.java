package ex12;

public class Main {
    public static void main(String[] args) {
        Filme filme1 = new Filme("A Viagem", "Luiz Oliveira", 120);

        filme1.iniciarFilme();
        filme1.iniciarFilme();
        System.out.println("Duração do filme: " + filme1.getDuracao() + " minutos.");

        filme1.pararFilme();
        filme1.pararFilme();
    }
}

