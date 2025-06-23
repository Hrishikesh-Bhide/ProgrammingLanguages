public class Main {
    public static void main(String[] args) {
        StackP<Integer> st = new StackP<>();
        st.push(10);
        st.print();
        st.pop();

        StackP<Character> st2 = new StackP<>();
        st2.push('c');
        st2.push('d');
        st2.print();

        Person p1 = new Person("Alice", 20);
        Person p2 = new Person("Bob", 30);
        StackP<Person> st3 = new StackP<>();
        st3.push(p2);
        st3.push(p1);
        st3.print();

        System.out.println(st3);
    }
}
