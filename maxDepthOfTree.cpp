#include <iostream>
using namespace std;


class Node {
    public:
    int data;
    Node* left;
    Node* right;
    // Node(int data) : data(data), left(nullptr), right(nullptr) {};
    
    Node(int data) {
        this->data = data;
        this->left = this->right = nullptr;
    }

};

int main() 
{
    return 0;
}