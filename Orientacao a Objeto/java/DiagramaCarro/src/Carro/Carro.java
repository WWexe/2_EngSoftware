package Carro;

public class Carro {
    private String modelo;
    private String marca;
    private Motor motor;

    public Carro(String modelo, String marca, Motor motor) {
        this.modelo = modelo;
        this.marca = marca;
        this.motor = motor; // Composição
    }

    @Override
    public String toString() {
        return "Carro{" +
                "modelo='" + modelo + '\'' +
                ", marca='" + marca + '\'' +
                ", motor=" + motor +
                '}';
    }

    public String getModelo() {
        return modelo;
    }

    public String getMarca() {
        return marca;
    }

    public Motor getMotor() {
        return motor;
    }

    protected void acionarAcelerador() {
        System.out.println("Acelerador acionado!");
        motor.acelerar();
    }

    protected void acionarFreio() {
        System.out.println("Freio acionado!");
        motor.reduzirRpm();
    }

    protected void trocarMarcha() {
        System.out.println("Marcha trocada!");
    }

    protected void ligarCarro() {
        System.out.println("Ligando o carro...");
        motor.ligar();
    }

    protected void desligarCarro() {
        System.out.println("Desligando o carro...");
        motor.desligar();
    }

    protected void turboBoost() {
        System.out.println("Ativando turbo boost!");
        motor.aumentarPotencia();
    }

    protected void reduzirPotenciaMotor() {
        System.out.println("Reduzindo a potência do motor!");
        motor.reduzirPotencia();
    }
}
