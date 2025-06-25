public class Dog extends Animal {
     
    String name;
    public Dog(String name, int age) {
        super("Dog", age);
        this.name = name;
    }

    public void move(int num){
        System.out.println("Dog moves " +num+ " steps");
    }

    public void move(){
         System.out.println("Dog moves " );
    }
}