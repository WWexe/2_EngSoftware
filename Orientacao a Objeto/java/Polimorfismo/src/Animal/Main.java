import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        Cachorro cachorro = new Cachorro("Mr. Picles", 200);
        List<Animal> pets = new ArrayList<>();
        pets.add(new Cachorro(""));
        System.out.println("Nome: " + cachorro.getNome());
        System.out.println("Idade: " + cachorro.getIdade());

        cachorro.emitirSom();
    }
}
