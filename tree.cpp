#include <iostream>
#include <queue>  // Required for using std::queue
#include <stack>
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
        int levelSize = q.size();  // Number of nodes at the current level
        for (int i = 0; i < levelSize; ++i) {
            Node* node = q.front();
            cout << node->data << " ";
            q.pop();

            if (node->left != nullptr)
                q.push(node->left);
            if (node->right != nullptr)
                q.push(node->right);
        }
        cout << endl;  // Move to the next line after finishing current level
    }
}

// Function to perform depth-first traversal (DFS)
void depthOrderTraverse(Node* root) {
    if (root == nullptr)
        return;

    stack<Node*> s;
    s.push(root);

    while (!s.empty()) {
        Node* node = s.top();
        s.pop();
        cout << node->data << " ";

        if (node->right!= nullptr)
            s.push(node->right);
        if (node->left != nullptr)
            s.push(node->left);
    }

}

// Function for Inorder traversal 
void inorderTraversal(Node* root) {
    if (root == nullptr)
        return;

    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

// Function for Postorder traversal
void postorderTraversal(Node* root) {
    if (root == nullptr)
        return;

    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}

// Function for Preorder traversal
void preorderTraversal(Node* root) {
    if (root == nullptr)
        return;

    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

int main() {
    Node* root = nullptr;

    root = buildTree(root);
    cout << "Tree structure (level-order traversal):" << endl;
    levelOrderTraverse(root);
    cout<<endl;
    inorderTraversal(root);
    cout<<endl;
    return 0;
}
