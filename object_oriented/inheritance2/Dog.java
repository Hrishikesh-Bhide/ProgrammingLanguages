package inheritance2;

public class Dog extends Animal  {
   String name;

   Dog(String name, int age) {
    super("Dog", age);
    this.name = name;
   }

   void breathe() {
        System.out.println("Dog is breathing");
    }

    void beAgoodBoy(){
        
    }

    @Override
    public String toString() {
        return "Dog " +name+ " is " +age+ " years old!";
    }

    

}
