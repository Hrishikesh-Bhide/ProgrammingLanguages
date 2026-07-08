package inheritance;

public class Main {

    public static void main(String[] args) {

        Dog d = new Dog("Tom");
        System.out.println(d.species);
        d.breathe();  
        d.speak();

        Dog d2 = new Dog("Rex");
        
        Cat c = new Cat("Playful");
        System.out.println(c.age);
        c.breathe(10);

        Queue<Integer> q = new Queue<>();
        q.enqueue(10);
        q.enqueue(20);
        q.enqueue(30);
        q.dequeue();
        q.print();

        Queue<Dog> q2 = new Queue<>();
        q2.enqueue(d);
        q2.enqueue(d2);
        q2.print();

        System.out.println(d);

        System.out.println(q);
        
    }

}