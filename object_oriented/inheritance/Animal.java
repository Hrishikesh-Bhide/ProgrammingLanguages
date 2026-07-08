package inheritance;

class Animal {

    String species;
    int age;

    Animal() {
        species = "Unknown";
        age = 0;
    }

    Animal(String species, int age) {
        this.species = species;
        this.age = age;
    }

    void breathe() {
        System.out.println("Animal is breathing");
    }

    

    void speak() {
        System.out.println("Animal is making a sound");
    }

    void move() {
        System.out.println("Animal is moving");
    }

}