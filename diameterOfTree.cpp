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
    // Helper function to compute both the height and the diameter of the tree simultaneously
    pair<int, int> heightAndDiameter(Node* node) {
        // Base case: if the node is null, height is 0 and diameter is 0
        if (node == nullptr) {
            return {0, 0};
        }
        
        // Recursively get the height and diameter of the left and right subtrees
        pair<int, int> leftResult = heightAndDiameter(node->left);
        pair<int, int> rightResult = heightAndDiameter(node->right);
        
        // The height of the current node is the max height of the two subtrees plus 1
        int height = max(leftResult.first, rightResult.first) + 1;
        
        // The diameter passing through the current node is the sum of the heights of the left and right subtrees
        int diameterThroughNode = leftResult.first + rightResult.first;
        
        // The overall diameter is the maximum of the diameter through the current node and the diameters of the left and right subtrees
        int diameter = max(diameterThroughNode, max(leftResult.second, rightResult.second));
        
        return {height, diameter};
    }

    int diameterOfBinaryTree(Node* node) {
        // We are only interested in the diameter, so return the second value of the pair
        return heightAndDiameter(node).second;
    }
};
