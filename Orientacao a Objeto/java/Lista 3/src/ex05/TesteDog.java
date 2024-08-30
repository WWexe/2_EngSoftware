package ex05;

import java.util.Scanner;

public class TesteDog {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Dog dog = new Dog("Pete", "Repete", 18);
        System.out.println(dog);
        while (true) {
            System.out.println("Escolha uma opcao: 1 - Parar | 2 - Correr | 3 - Parar de Latir | 4 - Latir | 0 - Sair...");
            int opc = scanner.nextInt();
            if (opc == 1) {
                dog.parar();
            } else if (opc == 2) {
                dog.correr();
            } else if (opc == 3) {
                dog.pararLatir();
            } else if (opc == 4) {
                dog.latir();
            }else if (opc == 0) {
                break;
            }
        }
    }
}
