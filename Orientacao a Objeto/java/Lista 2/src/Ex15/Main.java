package Ex15;

import java.util.Scanner;

public class Main {

    public static long fatorialIterativo(int n) {
        long resultado = 1;
        for (int i = 1; i <= n; i++) {
            resultado *= i;
        }
        return resultado;
    }

    public static long fatorialRecursivo(int n) {
        if (n == 0 || n == 1) {
            return 1;
        } else {
            return n * fatorialRecursivo(n - 1);
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite um número inteiro: ");
        int numero = scanner.nextInt();

        if (numero < 0) {
            System.out.println("O fatorial não está definido para números negativos.");
        } else {
            long resultadoIterativo = fatorialIterativo(numero);
            System.out.println("Fatorial (versão iterativa) de " + numero + " é: " + resultadoIterativo);

            long resultadoRecursivo = fatorialRecursivo(numero);
            System.out.println("Fatorial (versão recursiva) de " + numero + " é: " + resultadoRecursivo);
        }

        scanner.close();
    }
}

