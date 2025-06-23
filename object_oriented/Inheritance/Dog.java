public class Dog extends Animal {
     
    //String name;
    public Dog(String name, int age) {
        //this.name = name;
        super("Dog", age);
    }

    public void move(int num){
        System.out.println("Dog moves " +num+ " steps");
    }

    public void move(){
         System.out.println("Dog moves " );
    }
}