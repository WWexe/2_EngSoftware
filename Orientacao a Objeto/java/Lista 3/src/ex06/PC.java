package ex06;

public class PC {
    private String cpu;
    private int ram;
    private int storage;
    private boolean ligado;

    public PC(String cpu, int ram, int storage) {
        this.cpu = cpu;
        this.ram = ram;
        this.storage = storage;
        this.ligado = false;
    }

    @Override
    public String toString() {
        return "PC [cpu=" + cpu + ", ram=" + ram + ", storage=" + storage + "]";
    }

    public void ligar() {
        if (!ligado) {
            ligado = true;
            System.out.println("O PC agora está LIGADO!");
        } else {
            System.out.println("O PC já está LIGADO");
        }
    }

    public void desligar() {
        if (ligado) {
            ligado = false;
            System.out.println("O PC agora está DESLIGADO!");
        } else {
            System.out.println("O PC já está DESLIGADO!");
        }
    }

    public String getCpu() {
        return cpu;
    }

    public int getRam() {
        return ram;
    }

    public int getStorage() {
        return storage;
    }

    public boolean getLigado() {
        return ligado;
    }
}
