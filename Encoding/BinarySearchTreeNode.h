#include <iostream>
using namespace std;

class BinarySearchTreeNode{
    public:
        char character = '\0';
        int frequency = 0;
        BinarySearchTreeNode *left_child;
        BinarySearchTreeNode *right_child;

        BinarySearchTreeNode(){
            this->left_child = NULL;
            this->right_child = NULL;
        }
};