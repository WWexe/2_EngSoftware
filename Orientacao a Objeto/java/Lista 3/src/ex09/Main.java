package ex09;

public class Main {
    public static void main(String[] args) {
        Produto produto1 = new Produto("Camiseta", 50.00, 100);

        produto1.aumentarEstoque(20);
        System.out.println(produto1.getNome() + " tem " + produto1.getQuantidadeEstoque() + " unidades no estoque.");

        produto1.diminuirEstoque(50);
        System.out.println(produto1.getNome() + " tem " + produto1.getQuantidadeEstoque() + " unidades no estoque.");

        produto1.diminuirEstoque(100);
    }
}

