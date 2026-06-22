template <typename T>
class TreeNode {
public:
    T data;
    TreeNode<T>* left;
    TreeNode<T>* right;

    TreeNode(T value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

template <typename T>
class BST {
private:
    TreeNode<T>* root;

    TreeNode<T>* insert(TreeNode<T>* node, T value) {
        if (node == nullptr) {
            return new TreeNode<T>(value);
        }

        if (value < node->data) {
            node->left = insert(node->left, value);
        } else {
            node->right = insert(node->right, value);
        }

        return node;
    }

public:
    BST() {
        root = nullptr;
    }

    void add(T value) {
        root = insert(root, value);
    }
};