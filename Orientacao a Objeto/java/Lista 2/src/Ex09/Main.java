package Ex09;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Calculadora calculadora = new Calculadora();

        System.out.println("Escolha uma operação:");
        System.out.println("1 - Somar");
        System.out.println("2 - Subtrair");
        System.out.println("3 - Multiplicar");
        System.out.println("4 - Dividir");

        System.out.print("Digite o número da operação desejada: ");
        int escolha = scanner.nextInt();

        System.out.print("Digite o primeiro número: ");
        double numero1 = scanner.nextDouble();

        System.out.print("Digite o segundo número: ");
        double numero2 = scanner.nextDouble();

        double resultado = 0;

        switch (escolha) {
            case 1:
                resultado = calculadora.somar(numero1, numero2);
                System.out.println("Resultado da soma: " + resultado);
                break;
            case 2:
                resultado = calculadora.subtrair(numero1, numero2);
                System.out.println("Resultado da subtração: " + resultado);
                break;
            case 3:
                resultado = calculadora.multiplicar(numero1, numero2);
                System.out.println("Resultado da multiplicação: " + resultado);
                break;
            case 4:
                resultado = calculadora.dividir(numero1, numero2);
                if (!Double.isNaN(resultado)) {
                    System.out.println("Resultado da divisão: " + resultado);
                }
                break;
            default:
                System.out.println("Opção inválida.");
                break;
        }

        scanner.close();
    }
}
