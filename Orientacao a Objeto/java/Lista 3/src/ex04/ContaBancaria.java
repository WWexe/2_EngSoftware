package ex04;

public class ContaBancaria {
    private int numero;
    private double saldo;

    public ContaBancaria(int numero, double saldo) {
        this.numero = numero;
        this.saldo = saldo;
    }
    public void depositar10() {
        System.out.println("Despositando R$10,00");
        this.saldo += 10;
    }
    public void sacar10() {
        if (this.saldo < 10) {
            System.out.println("Saldo Insuficiente");
        } else {
            System.out.println("Sacado R$10,00");
            this.saldo -= 10;
        }
    }
    public int getNumero() {
        return numero;
    }
    public double getSaldo() {
        return saldo;
    }
}
