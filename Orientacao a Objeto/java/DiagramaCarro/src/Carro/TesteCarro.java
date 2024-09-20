package Carro;

public class TesteCarro {
    public static void main(String[] args) {
        Motor motor1 = new Motor("V12", 4000, TipoCombustivel.GASOLINA, 800, 300, false);

        Carro carro1 = new Carro("Q7", "Audi", motor1);

        System.out.println(carro1);

        carro1.ligarCarro();
        carro1.acionarAcelerador();
        carro1.turboBoost();
        carro1.acionarFreio();

        System.out.println(carro1);

        carro1.desligarCarro();
    }
}
