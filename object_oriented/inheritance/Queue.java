package inheritance;

import java.util.LinkedList;

public class Queue<T> {
    private LinkedList<T> list;

    public Queue() {
        list = new LinkedList<>();
    }

    public void enqueue(T item) {
        list.addFirst(item);
    }

    public T dequeue() {
        if (isEmpty()) {
            System.out.println("Cannot dequeue from an empty queue");
        }
        return list.removeLast();
    }

    public T peek() {
        if (isEmpty()) {
            System.out.println("Queue is Empty!");
        }
        return list.getFirst();
    }

    public boolean isEmpty() {
        return list.isEmpty();
    }

    public int size() {
        return list.size();
    }

    public void print() {
        System.out.println("Queue contents:");
        for (T item : list) {
            System.out.println(item);
        }
    }
}
