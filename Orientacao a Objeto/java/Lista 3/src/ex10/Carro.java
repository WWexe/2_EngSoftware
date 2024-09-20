package ex10;

public class Carro {
    public String modelo;
    public String marca;
    public String cor;
    public int ano;
    public int potencia;
    public double valor;
    public int velocidadeMaxima;
    public int velocidadeAtual;

    public Carro(String modelo, String marca, String cor, int ano, int potencia, double valor, int velocidadeMaxima, int velocidadeAtual) {
        this.modelo = modelo;
        this.marca = marca;
        this.cor = cor;
        this.ano = ano;
        this.potencia = potencia;
        this.valor = valor;
        this.velocidadeMaxima = velocidadeMaxima;
        this.velocidadeAtual = velocidadeAtual;
    }
    @Override
    public String toString() {
        return "Marca: " + marca + ", Modelo: " + modelo + ", Ano: " + ano + ", Cor: " + cor +
                ", Potência: " + potencia + " CV, Valor: R$" + valor +
                ", Velocidade Máxima: " + velocidadeMaxima + " km/h, Velocidade Atual: " + velocidadeAtual + " km/h";
    }
    public void acelerar() {
        if (velocidadeAtual < velocidadeMaxima) {
            velocidadeAtual += 300;
        }
    }
    public void frear() {
        if (velocidadeAtual > 0) {
            velocidadeAtual -= 300;
        }
    }

}
