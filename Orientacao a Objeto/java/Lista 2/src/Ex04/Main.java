package Ex04;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite um número inteiro: ");
        int numero = scanner.nextInt();

        Verificador verificador = new Verificador(numero);

        System.out.println(verificador.verificarParidade());

        scanner.close();
    }
}

