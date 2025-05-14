#include <iostream>

using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};

class Bst {
private:
    Node *root;

    void _insert(Node *&sub_root, int x) {
        if (sub_root == nullptr) {
            sub_root = new Node(x);
        } else {
            if (x < sub_root->data) {
                _insert(sub_root->left, x);
            } else {
                _insert(sub_root->right, x);
            }
        }
    }

    void _print(Node *root) {
        if (!root) {
            return;
        }
        _print(root->right);
        cout << root->data << " ";
        _print(root->left);
    }

    Node* _findMin(Node *node) {
        while (node->left != nullptr) {
            node = node->left;
        }
        return node;
    }

    Node* _remove(Node *sub_root, int x) {
        if (sub_root == nullptr) {
            return sub_root;
        }

        if (x < sub_root->data) {
            sub_root->left = _remove(sub_root->left, x);
        } else if (x > sub_root->data) {
            sub_root->right = _remove(sub_root->right, x);
        } else {
            // Node with only one child or no child
            if (sub_root->left == nullptr) {
                Node *temp = sub_root->right;
                delete sub_root;
                return temp;
            } else if (sub_root->right == nullptr) {
                Node *temp = sub_root->left;
                delete sub_root;
                return temp;
            }

            // Node with two children: Get the inorder successor (smallest in the right subtree)
            Node *temp = _findMin(sub_root->right);

            // Copy the inorder successor's data to this node
            sub_root->data = temp->data;

            // Delete the inorder successor
            sub_root->right = _remove(sub_root->right, temp->data);
        }
        return sub_root;
    }

public:
    Bst() { root = nullptr; }

    void insert(int x) {
        _insert(root, x);
    }

    void remove(int x) {
        root = _remove(root, x);
    }

    void print() {
        _print(root);
        cout << endl;
    }
};

int main() {
    Bst tree;
    tree.insert(8);
    tree.insert(3);
    tree.insert(1);
    tree.insert(11);
    tree.insert(7);
    tree.insert(15);

    cout << "Before deletion: ";
    tree.print();

    tree.remove(3); // Deleting a node with one child
    cout << "After deleting 3: ";
    tree.print();

    tree.remove(8); // Deleting a node with two children
    cout << "After deleting 8: ";
    tree.print();

    return 0;
}
