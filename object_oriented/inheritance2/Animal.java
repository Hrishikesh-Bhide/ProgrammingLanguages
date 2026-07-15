package inheritance2;

class Animal implements Comparable<Animal> {

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

    @Override
    public int compareTo(Animal other) {
        //return this.species.compareTo(other.species);
        if(this.species.compareTo(other.species) == 0) {
            if(this.age == other.age) {
                return 0;
            } else if (this.age < other.age) {
                return -1;
            } else {
                return 1;
            }
        } else {
            return this.species.compareTo(other.species); 
        }
            
    }

}