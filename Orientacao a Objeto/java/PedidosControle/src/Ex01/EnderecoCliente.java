package Ex01;

public class EnderecoCliente {
    private String id;
    private String cep;
    private String cidade;
    private String estado;
    private String rua;
    private Integer numero;
    private String complemento;

    public EnderecoCliente(String id, String cep, String cidade, String estado, String rua, Integer numero, String complemento) {
        this.id = id;
        this.cep = cep;
        this.cidade = cidade;
        this.estado = estado;
        this.rua = rua;
        this.numero = numero;
        this.complemento = complemento;
    }

    @Override
    public String toString() {
        return "EnderecoCliente{" +
                "id='" + id + '\'' +
                ", cep='" + cep + '\'' +
                ", cidade='" + cidade + '\'' +
                ", estado='" + estado + '\'' +
                ", rua='" + rua + '\'' +
                ", numero=" + numero +
                ", complemento='" + complemento + '\'' +
                '}';
    }

}
