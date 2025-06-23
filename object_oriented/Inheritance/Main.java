public class Main {
    public static void main(String[] args) {
        Animal a1 = new Animal();
        Animal a2 = new Animal("Dog", 2);
        a1.breathe();
        a2.breathe();
        Dog d1 = new Dog("Sparky", 2);
        d1.breathe();
        d1.print();
        d1.move();
        d1.move(3);
    }
}
