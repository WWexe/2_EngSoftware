package Ex03;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite o primeiro número: ");
        double numero1 = scanner.nextDouble();

        System.out.print("Digite o segundo número: ");
        double numero2 = scanner.nextDouble();

        Calculadora calculadora = new Calculadora(numero1, numero2);

        System.out.println("Soma: " + calculadora.somar());
        System.out.println("Subtração: " + calculadora.subtrair());
        System.out.println("Multiplicação: " + calculadora.multiplicar());
        System.out.println("Divisão: " + calculadora.dividir());

        scanner.close();
    }
}

