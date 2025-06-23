public class NodeG<T> {
    T data;
    NodeG<T> next;

    public NodeG(T data) {
        this.data = data;
        this.next = null;
    }
}
