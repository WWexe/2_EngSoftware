package ex03;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int opc;
        Scanner scanner = new Scanner(System.in);
        System.out.println("Informe 2 numeros: ");
        int n1 = scanner.nextInt();
        int n2 = scanner.nextInt();
        System.out.println("1 - Somar | 2 - Subtrair | 3 - Multiplicar");
        opc = scanner.nextInt();

        if (opc == 1) {
            System.out.println("Soma: " + n1 + "+" + n2 + "=" + n1 + n2);
        } else if (opc == 2) {

        } else if (opc == 0) {
            System.out.println("Saindo...");
            break;
        } else {
            System.out.println("Escolha inválida.");
        }
        }
        scanner.close();
    }
}
