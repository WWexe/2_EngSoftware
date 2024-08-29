package ex10;

public class Main {
    public static void main(String[] args) {
        Carro carro = new Carro("r8", "audi", "vermelho", 2024, 500, 1000000, 300, 0);
        System.out.println(carro);
        carro.acelerar();
        System.out.println(carro);
        carro.frear();
        System.out.println(carro);
    }
}