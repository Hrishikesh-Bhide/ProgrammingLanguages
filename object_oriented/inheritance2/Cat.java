package inheritance2;

public class Cat extends Animal {
    String mood;

    Cat(String mood) {
        super("Cat", 5);
        this.mood = mood;
    }
    
    //void breathe(int x){
        //System.out.println(x);
    //}
}
