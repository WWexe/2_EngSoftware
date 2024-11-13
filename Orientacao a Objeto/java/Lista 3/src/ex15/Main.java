package ex15;

public class Main {
    public static void main(String[] args) {
        Jogo jogo1 = new Jogo("The Witcher 3", "RPG", 149.90);

        jogo1.iniciarJogo();
        jogo1.iniciarJogo();
        System.out.println("Preço do jogo: R$ " + jogo1.getPreco());

        jogo1.pausarJogo();
        jogo1.pausarJogo();
    }
}

