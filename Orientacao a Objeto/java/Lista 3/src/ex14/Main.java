package ex14;

public class Main {
    public static void main(String[] args) {
        Time time1 = new Time("Flamengo", "Jorge Jesus", 25);

        time1.adicionarJogadores(5);
        System.out.println("Número de jogadores no " + time1.getNome() + ": " + time1.getNumeroDeJogadores());

        time1.removerJogadores(10);
        System.out.println("Número de jogadores no " + time1.getNome() + ": " + time1.getNumeroDeJogadores());

        time1.removerJogadores(30);
    }
}

