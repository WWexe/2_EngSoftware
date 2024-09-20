package Ex01;

import java.util.List;

public class Pedido {
    private Integer codigo;
    private EnderecoCliente enderecoCliente;
    private Cliente cliente;
    private List<Itens> itens;

    public Pedido(Integer codigo, EnderecoCliente enderecoCliente, Cliente cliente, List<Itens> itens) {
        this.codigo = codigo;
        this.enderecoCliente = enderecoCliente;
        this.cliente = cliente;
        this.itens = itens;
    }

    @Override
    public String toString() {
        return "Pedido{" +
                "codigo=" + codigo +
                ", enderecoCliente=" + enderecoCliente +
                ", cliente=" + cliente +
                ", itens=" + itens +
                '}';
    }
}
