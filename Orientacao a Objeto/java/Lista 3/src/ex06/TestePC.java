package ex06;

import java.util.Scanner;

public class TestePC {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        PC pc = new PC("Ryzen", 32, 1000);
        System.out.println(pc);
        while (true) {
            System.out.println("Escolha uma opcao: 1 - Ligar o PC | 2 - Desligar o PC | 0 - Sair...");
            int opc = scanner.nextInt();
            if(opc == 1) {
                pc.ligar();
            } else if (opc == 2) {
                pc.desligar();
            } else if (opc == 0) {
                break;
            }
        }
    }
}