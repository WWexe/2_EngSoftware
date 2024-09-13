package Ex01;

public class EnderecoCliente {
    private String id;
    private String cep;
    private String cidade;
    private String estado;
    private String rua;
    private Integer numero;
    private String complemento;

    public EnderecoCliente(String cep, String cidade, String estado, String rua, Integer numero, String complemento) {
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
                "cep='" + cep + '\'' +
                ", cidade='" + cidade + '\'' +
                ", estado='" + estado + '\'' +
                ", rua='" + rua + '\'' +
                ", numero=" + numero +
                ", complemento='" + complemento + '\'' +
                '}';
    }

    public String getId() {
        return id;
    }
    public String getCep() {
        return cep;
    }

    public String getCidade() {
        return cidade;
    }

    public String getEstado() {
        return estado;
    }

    public String getRua() {
        return rua;
    }

    public Integer getNumero() {
        return numero;
    }

    public String getComplemento() {
        return complemento;
    }
}
