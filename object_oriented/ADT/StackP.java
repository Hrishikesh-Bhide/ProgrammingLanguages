import java.util.LinkedList;

public class StackP<T> {
    private LinkedList<T> list;

    public StackP() {
        list = new LinkedList<>();
    }

    public void push(T item) {
        list.addFirst(item);
    }

    public T pop() {
        if (isEmpty()) throw new RuntimeException("Stack Underflow");
        return list.removeFirst();
    }

    public T peek() {
        if (isEmpty()) throw new RuntimeException("Stack is empty");
        return list.getFirst();
    }

    public boolean isEmpty() {
        return list.isEmpty();
    }

    public int size() {
        return list.size();
    }

    public void print() {
        System.out.println("Stack (top to bottom):");
        for (T item : list) {
            System.out.println(item);
        }
    }
}
