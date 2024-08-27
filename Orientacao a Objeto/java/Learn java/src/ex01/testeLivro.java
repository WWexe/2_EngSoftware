import ex01.Livro;
import java.util.Scanner;

public class testeLivro {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Livro livro = new Livro("Medicina oculta", "Hand", 289);

        System.out.println(livro);
        while (true) {
            System.out.println("\nEscolha uma ação: 1 - Abrir Livro, 2 - Ler Página, 0 - Sair");
            int escolha = scanner.nextInt();

            if (escolha == 1) {
                livro.abrirLivro();
            } else if (escolha == 2) {
                livro.lerPagina();
            } else if (escolha == 0) {
                System.out.println("Saindo...");
                break;
            } else {
                System.out.println("Escolha inválida.");
            }
        }

        scanner.close();
    }
}
