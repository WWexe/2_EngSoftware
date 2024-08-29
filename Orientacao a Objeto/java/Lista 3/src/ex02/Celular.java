package ex02;

public class Celular {
    private String marca;
    private String modelo;
    private int bateria;
    private boolean ligado;

    public Celular(String marca, String modelo, int bateria) {
        this.marca = marca;
        this.modelo = modelo;
        this.bateria = bateria;
        this.ligado = false;
    }

    @Override
    public String toString() {
        return "Marca: " + marca + ", Modelo: " + modelo + ", Bateria: " + bateria;
    }

    public void ligar() {
        if(!ligado) {
            ligado = true;
            System.out.println("O celular agora está LIGADO");
        } else {
            System.out.println("O celular já está ligado");
        }
    }

    public void desligar() {
        if(ligado) {
            ligado = false;
            System.out.println("O celular agora está DESLIGADO");
        } else {
            System.out.println("O celular já está desligado");
        }
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

    public int getBateria() {
        return bateria;
    }

    public void setBateria(int bateria) {
        this.bateria = bateria;
    }

    public boolean isLigado() {
        return ligado;
    }
}
