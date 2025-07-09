public class Animal {
    protected String species;
    protected int age;

    public Animal() {
        this.species = "default";
        this.age = 0;
    }

    public Animal(String species, int age) {
        this.species = species;
        this.age = age;
    }

    public void breathe() {
        System.out.println(species + " is breathing heavily.");
    }

    public void speak() {
        System.out.println(species + " makes a sound.");
    }

    public void move() {
        System.out.println(species + " moves forward.");
    }

    public void print() {
        System.out.println("Animal properties " + species + " " + age);
    }
}