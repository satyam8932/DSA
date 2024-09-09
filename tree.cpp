#include <iostream>
#include <queue>  // Required for using std::queue
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        this->left = this->right = nullptr;
    }
};

// Function to build the tree
Node* buildTree(Node* root) {
    cout << "Enter the data (-1 for no node): " << endl;
    int data;
    cin >> data;
    if (data == -1) return nullptr;

    root = new Node(data);

    cout << "Inserting in left" << endl;
    root->left = buildTree(root->left);
    cout << "Inserting in right" << endl;
    root->right = buildTree(root->right);

    return root;
}

// Function to perform level-order traversal (BFS)
void levelOrderTraverse(Node* root) {
    if (root == nullptr) {
        cout << "Tree is empty" << endl;
        return;
    }

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* node = q.front();
        cout << node->data << " ";
        cout<<endl;
        q.pop();

        if (node->left != nullptr)
            q.push(node->left);
        if (node->right != nullptr)
            q.push(node->right);
    }
    cout << endl;
}

int main() {
    Node* root = nullptr;

    root = buildTree(root);
    cout << "Tree structure (level-order traversal):" << endl;
    levelOrderTraverse(root);
    return 0;
}
