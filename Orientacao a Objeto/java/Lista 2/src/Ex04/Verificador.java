package Ex04;

public class Verificador {
    private int numero;

    public Verificador(int numero) {
        this.numero = numero;
    }

    public String verificarParidade() {
        return (numero % 2 == 0) ? "O número é par." : "O número é ímpar.";
    }
}

