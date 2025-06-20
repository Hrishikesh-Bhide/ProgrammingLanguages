public class Queue {
    private LinkedList list = new LinkedList();

    public void enqueue(int data) {
        list.insertAtBack(data);
    }

    public void dequeue() {
        list.deleteAtFront();
    }

    public void display() {
        System.out.print("Queue: ");
        list.printList();
    }

    public boolean isEmpty() {
        return list.isEmpty();
    }
}
