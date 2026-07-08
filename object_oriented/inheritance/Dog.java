package inheritance;

public class Dog extends Animal {
   String name;
   Dog(String name) {
    super("Dog", 10);
    this.name = name;
   }
   void breathe() {
        System.out.println("Dog is breathing");
    }

    @Override
    public String toString() {
        return "Dog " +name;
    }
}
