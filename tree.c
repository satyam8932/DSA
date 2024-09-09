#include <stdio.h>
#include <ncurses.h>

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
};

int main() {
    // Initialize ncurses
    initscr();

    // Create a new node
    TreeNode* root = (TreeNode*)malloc(sizeof(TreeNode));
    root->data = 10;
    root->left = NULL;
    root->right = NULL;

    // Print the root node's data
    printw("Root node data: %d\n", root->data);

    // End ncurses
    endwin();

    return 0;
}