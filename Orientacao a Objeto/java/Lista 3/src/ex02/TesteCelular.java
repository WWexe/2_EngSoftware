package ex02;
import java.util.Scanner;

public class TesteCelular {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Celular celular = new Celular("Samsung", "Galaxy", 500);

        System.out.println(celular);
        while (true) {
            System.out.println("\nEscolha uma ação: 1 - Ligar o Celular | 2 - Desligar o Celular | 0 - Sair");
            int opc = scanner.nextInt();

            if(opc == 1) {
                celular.ligar();
            } else if (opc == 2) {
                celular.desligar();
            } else if (opc == 0) {
                System.out.println("\nSaindo...");
                break;
            } else {
                System.out.println("Opção inválida. Tente novamente.");
            }
        }
        scanner.close();
    }
}
