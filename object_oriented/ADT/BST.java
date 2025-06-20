public class BST {
    private BSTNode root;

    public void insert(int data) {
        root = insertRec(root, data);
    }

    private BSTNode insertRec(BSTNode node, int data) {
        if (node == null) return new BSTNode(data);
        if (data < node.data)
            node.left = insertRec(node.left, data);
        else
            node.right = insertRec(node.right, data);
        return node;
    }

    public boolean search(int data) {
        return searchRec(root, data);
    }

    private boolean searchRec(BSTNode node, int data) {
        if (node == null) return false;
        if (data == node.data) return true;
        if (data < node.data)
            return searchRec(node.left, data);
        else
            return searchRec(node.right, data);
    }

    public void inorder() {
        inorderRec(root);
        System.out.println();
    }

    private void inorderRec(BSTNode node) {
        if (node != null) {
            inorderRec(node.left);
            System.out.print(node.data + " ");
            inorderRec(node.right);
        }
    }
}
