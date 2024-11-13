package Ex14;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite uma string: ");
        String entrada = scanner.nextLine();

        int contadorVogais = 0;
        String vogais = "aeiouAEIOU";

        for (int i = 0; i < entrada.length(); i++) {
            char caractere = entrada.charAt(i);
            if (vogais.indexOf(caractere) != -1) {
                contadorVogais++;
            }
        }

        System.out.println("O número de vogais na string é: " + contadorVogais);

        scanner.close();
    }
}

