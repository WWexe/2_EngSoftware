package Carro;

public class Motor {
    private String modelo;
    private Integer cilindradas;
    private TipoCombustivel tipoCombustivel;
    private Integer rpm;
    private Integer potencia;
    private Boolean ligado;

    public Motor(String modelo, Integer cilindradas, TipoCombustivel tipoCombustivel, Integer rpm, Integer potencia, Boolean ligado) {
        this.modelo = modelo;
        this.cilindradas = cilindradas;
        this.tipoCombustivel = tipoCombustivel;
        this.rpm = rpm;
        this.potencia = potencia;
        this.ligado = ligado;
    }

    @Override
    public String toString() {
        return "Motor{" +
                "modelo='" + modelo + '\'' +
                ", cilindradas=" + cilindradas +
                ", tipoCombustivel=" + tipoCombustivel +
                ", rpm=" + rpm +
                ", potencia=" + potencia +
                ", ligado=" + ligado +
                '}';
    }

    public String getModelo() {
        return modelo;
    }

    public Integer getCilindradas() {
        return cilindradas;
    }

    public TipoCombustivel getTipoCombustivel() {
        return tipoCombustivel;
    }

    public Integer getRpm() {
        return rpm;
    }

    public Integer getPotencia() {
        return potencia;
    }

    public Boolean getLigado() {
        return ligado;
    }

    protected void ligar() {
        if (!ligado) {
            ligado = true;
            System.out.println("Ligando o Motor...");
        } else {
            System.out.println("O Motor já está Ligado!");
        }
    }

    protected void desligar() {
        if (ligado) {
            ligado = false;
            System.out.println("Desligando o Motor...");
        } else {
            System.out.println("O Motor já está Desligado!");
        }
    }

    protected void aumentarPotencia() {
        if (ligado) {
            potencia += 100;
            System.out.println("Aumentando potencia do Motor em +100 cilindradas...");
            System.out.println("Potencia Atual: " + potencia);
        } else {
            System.out.println("Ligue o Carro primeiro!");
        }
    }

    protected void reduzirPotencia() {
        if (ligado) {
            potencia -= 100;
            System.out.println("Reduzindo a potencia do Motor em -100 cilindradas...");
            System.out.println("Potencia Atual: " + potencia);
        } else {
            System.out.println("Ligue o Carro primeiro!");
        }
    }

    protected void acelerar() {
        if (ligado) {
            rpm += 100;
            System.out.println("Acelerando o Motor, (RPM + 100)");
            System.out.println("RPM Atual: " + rpm);
        }
    }

    protected void reduzirRpm() {
        if (ligado) {
            rpm -= 100;
            System.out.println("Reduzindo RPM em -100...");
            System.out.println("RPM Atual: " + rpm);
        } else {
            System.out.println("Ligue o Carro primeiro!");
        }
    }
}
