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

class Solution {
    public:
    // int maxDepth(Node* node) {
    //     if (node == nullptr) {
    //         return 0;
    //     }
        
    //     int leftHeight = maxDepth(node->left);
    //     int rightHeight = maxDepth(node->right);
        
    //     return max(leftHeight, rightHeight) + 1;
    // }

    // int maxDiameter(Node* node){
    //     if (node == nullptr) {
    //         return 0;
    //     }
    //     int diameterLeft = maxDiameter(node->left);
    //     int diameterRight = maxDiameter(node->right);
    //     int completeHeight =  maxDepth(node->left) + maxDepth(node->right) + 1;

    //     int ans = max(completeHeight, max(diameterRight, diameterLeft));
    //     return ans;
    // }
};