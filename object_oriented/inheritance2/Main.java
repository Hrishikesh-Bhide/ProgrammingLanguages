package inheritance2;

import java.util.ArrayList;
import java.util.Collections;

public class Main {

    public static void main(String[] args) {
        Dog d1 = new Dog("Buddy", 5);
        Dog d2 = new Dog("Charlie", 10);
        Dog d3 = new Dog("Rex", 15);
        Dog d4 = new Dog("A", 20);
        Dog d5 = new Dog("B", 25);
        Dog d6 = new Dog("A", 30);

        ArrayList<Dog> dogs = new ArrayList<>();
        dogs.add(d3);
        dogs.add(d1);
        dogs.add(d2);
        dogs.add(d5);
        dogs.add(d6);
        dogs.add(d4);

        System.out.println("List before sorting\n");
        for (Dog d: dogs) {
            System.out.println(d);
        }

        CompareDogByAge cda = new CompareDogByAge();
        CompareDogByName cdn = new CompareDogByName();

        Collections.sort(dogs, cdn);
        System.out.println("List after sorting\n");

        for (Dog d: dogs) {
            System.out.println(d);
        }
        
        Cat c = new Cat("Jolly");
        Cat c2 = new Cat("Dull");
        ArrayList<Cat> cats = new ArrayList<>();
        cats.add(c2);
        cats.add(c);
        Collections.sort(cats);
        
        Animal a = new Animal();
        a = d2;
        a.breathe();
        String x = d2.name;
        d2.beAgoodBoy();
        a = c;
        a.breathe();
        ArrayList<Animal> animals = new ArrayList<>();
        animals.add(d2);
        animals.add(d4);
        animals.add(c);
        Collections.sort(animals);
        for (Animal a2: animals) {
            System.out.println(a2);
        }
    }

}