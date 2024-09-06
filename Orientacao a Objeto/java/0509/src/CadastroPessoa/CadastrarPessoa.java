package CadastroPessoa;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class CadastrarPessoa {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        List<Pessoa> listaDePessoas = new ArrayList<>();

        boolean continuar = true;

        while (continuar) {
            System.out.println("Digite o nome da pessoa:");
            String nome = scanner.nextLine();

            System.out.println("Digite a idade da pessoa:");
            int idade = scanner.nextInt();
            scanner.nextLine();

            List<Endereco> enderecos = new ArrayList<>();
            boolean adicionarEndereco = true;

            while (adicionarEndereco) {
                System.out.println("Digite o logradouro:");
                String logradouro = scanner.nextLine();

                System.out.println("Digite o número:");
                String numero = scanner.nextLine();

                System.out.println("Digite o bairro:");
                String bairro = scanner.nextLine();

                System.out.println("Digite a cidade:");
                String cidade = scanner.nextLine();

                System.out.println("Digite o estado:");
                String estado = scanner.nextLine();

                System.out.println("Digite o CEP:");
                String cep = scanner.nextLine();

                Endereco endereco = new Endereco(logradouro, numero, bairro, cidade, estado, cep);
                enderecos.add(endereco);

                System.out.println("Deseja adicionar outro endereço? (s/n)");
                String resposta = scanner.nextLine();
                if (resposta.equalsIgnoreCase("n")) {
                    adicionarEndereco = false;
                }
            }

            Pessoa pessoa = new Pessoa(nome, idade, enderecos);
            listaDePessoas.add(pessoa);

            System.out.println("Deseja cadastrar outra pessoa? (s/n)");
            String resposta = scanner.nextLine();
            if (resposta.equalsIgnoreCase("n")) {
                continuar = false;
            }
        }

        System.out.println("Pessoas cadastradas:");
        for (Pessoa p : listaDePessoas) {
            System.out.println("Nome: " + p.getNome() + ", Idade: " + p.getIdade());
            System.out.println("Endereços:");
            for (Endereco e : p.getEnderecos()) {
                System.out.println(" - " + e.getEnderecoCompleto());
            }
            System.out.println();
        }

        scanner.close();
    }
}
