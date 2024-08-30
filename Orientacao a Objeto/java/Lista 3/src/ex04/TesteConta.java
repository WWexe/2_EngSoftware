package ex04;

import java.util.Scanner;

public class TesteConta {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ContaBancaria contabancaria = new ContaBancaria(007, 0);
        System.out.println(contabancaria);
        while (true) {
            System.out.println("Escolha uma opcao: 1 - Depositar 10 reais | 2 - Sacar 10 reais | 0 - Sair");
            int opc = scanner.nextInt();

            if(opc == 1) {
                contabancaria.depositar10();
            } else if(opc == 2) {
                contabancaria.sacar10();
            } else if(opc == 0) {
                break;
            } else {
                System.out.println("Escolha uma opao válida!");
            }
        }
        scanner.close();
    }
}
