#include <iostream>

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : data(value), left(NULL), right(NULL) {}
};

class BinarySearchTree {
private:
    TreeNode* root;

    TreeNode* insertRec(TreeNode* node, int key) {
        if (node == NULL) {
            return new TreeNode(key);
        }

        if (key < node->data) {
            node->left = insertRec(node->left, key);
        } else if (key > node->data) {
            node->right = insertRec(node->right, key);
        }

        return node;
    }

    TreeNode* minValueNode(TreeNode* node) {
        TreeNode* current = node;
        while (current && current->left != NULL) {
            current = current->left;
        }
        return current;
    }

    TreeNode* deleteRec(TreeNode* node, int key) {
        if (node == NULL) {
            return node;
        }

        if (key < node->data) {
            node->left = deleteRec(node->left, key);
        } else if (key > node->data) {
            node->right = deleteRec(node->right, key);
        } else {
            if (node->left == NULL) {
                TreeNode* temp = node->right;
                delete node;
                return temp;
            } else if (node->right == NULL) {
                TreeNode* temp = node->left;
                delete node;
                return temp;
            }

            TreeNode* temp = minValueNode(node->right);
            node->data = temp->data;
            node->right = deleteRec(node->right, temp->data);
        }

        return node;
    }

    bool searchRec(TreeNode* node, int key) {
        if (node == NULL) {
            return false;
        }

        if (key == node->data) {
            return true;
        } else if (key < node->data) {
            return searchRec(node->left, key);
        } else {
            return searchRec(node->right, key);
        }
    }

public:
    BinarySearchTree() : root(NULL) {}

    void insert(int key) {
        root = insertRec(root, key);
    }

    void deleteNode(int key) {
        root = deleteRec(root, key);
    }

    bool search(int key) {
        return searchRec(root, key);
    }
};

int main() {
    BinarySearchTree tree;

    int choice;
    int key;

    while (true) {
        std::cout << "Binary Search Tree Menu:" << std::endl;
        std::cout << "1. Insert" << std::endl;
        std::cout << "2. Delete" << std::endl;
        std::cout << "3. Search" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter the value to insert: ";
                std::cin >> key;
                tree.insert(key);
                break;
            case 2:
                std::cout << "Enter the value to delete: ";
                std::cin >> key;
                tree.deleteNode(key);
                break;
            case 3:
                std::cout << "Enter the value to search: ";
                std::cin >> key;
                if (tree.search(key)) {
                    std::cout << key << " found in the tree." << std::endl;
                } else {
                    std::cout << key << " not found in the tree." << std::endl;
                }
                break;
            case 4:
                return 0;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }
}
