public class Stack {
    private LinkedList list = new LinkedList();

    public void push(int data) {
        list.insertAtFront(data);
    }

    public void pop() {
        list.deleteAtFront();
    }

    public void display() {
        System.out.print("Stack: ");
        list.printList();
    }

    public boolean isEmpty() {
        return list.isEmpty();
    }
}
