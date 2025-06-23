public class Person {
    String name;
    int age;
    
    Person(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public String toString(){
        String ret = "Person: " +this.name + " is " +this.age+ " years old!";
        return ret;
    }
}
