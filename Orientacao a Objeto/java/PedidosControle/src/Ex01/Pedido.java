package Ex01;

public class Pedido {
    private Integer codigo;
    private EnderecoCliente enderecoCliente;
    private Cliente cliente;
    private Pedido pedido;

    public Pedido(Integer codigo, EnderecoCliente enderecoCliente, Cliente cliente, Pedido pedido) {
        this.codigo = codigo;
        this.enderecoCliente = enderecoCliente;
        this.cliente = cliente;
        this.pedido = pedido;
    }

    @Override
    public String toString() {
        return "Pedido{" +
                "codigo=" + codigo +
                ", enderecoCliente=" + enderecoCliente +
                ", cliente=" + cliente +
                ", pedido=" + pedido +
                '}';
    }

    public Integer getCodigo() {
        return codigo;
    }

    public EnderecoCliente getEnderecoCliente() {
        return enderecoCliente;
    }

    public Cliente getCliente() {
        return cliente;
    }

    public Pedido getPedido() {
        return pedido;
    }
}
