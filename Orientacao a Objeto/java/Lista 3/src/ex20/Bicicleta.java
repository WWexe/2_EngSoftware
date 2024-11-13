package ex20;

public class Bicicleta {
    private String marca;
    private String modelo;
    private double tamanhoRoda;

    public Bicicleta(String marca, String modelo, double tamanhoRoda) {
        this.marca = marca;
        this.modelo = modelo;
        this.tamanhoRoda = tamanhoRoda;
    }

    public void pedalar() {
        System.out.println("A bicicleta está pedalando.");
    }

    public void frear() {
        System.out.println("A bicicleta está parando.");
    }

    public String getMarca() {
        return marca;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public String getModelo() {
        return modelo;
    }

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    public double getTamanhoRoda() {
        return tamanhoRoda;
    }

    public void setTamanhoRoda(double tamanhoRoda) {
        this.tamanhoRoda = tamanhoRoda;
    }
}

