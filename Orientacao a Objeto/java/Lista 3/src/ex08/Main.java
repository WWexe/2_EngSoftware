package ex08;

public class Main {
    public static void main(String[] args) {
        Professor professor1 = new Professor("João", "Matemática", 3000.00);
        professor1.darAula();
        professor1.corrigirProvas();
        professor1.setSalario(3500.00);
        System.out.println(professor1.getNome() + " tem um novo salário: R$ " + professor1.getSalario());
    }
}

