package Ex09;

public class Calculadora {
    public double somar(double numero1, double numero2) {
        return numero1 + numero2;
    }

    public double subtrair(double numero1, double numero2) {
        return numero1 - numero2;
    }

    public double multiplicar(double numero1, double numero2) {
        return numero1 * numero2;
    }

    public double dividir(double numero1, double numero2) {
        if (numero2 != 0) {
            return numero1 / numero2;
        } else {
            System.out.println("Erro: Divisão por zero não permitida.");
            return Double.NaN; // Retorna "Not a Number" em caso de erro.
        }
    }
}

