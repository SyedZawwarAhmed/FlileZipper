#include <iostream>
using namespace std;

class BinarySearchTreeNode{
    public:
        int val;
        BinarySearchTreeNode *left_child;
        BinarySearchTreeNode *right_child;

        BinarySearchTreeNode(int val){
            this->val = val;
            this->left_child = NULL;
            this->right_child = NULL;
        }
        BinarySearchTreeNode(){
            this->left_child = NULL;
            this->right_child = NULL;
        }
        // ~node(){
        //     delete left_child, right_child;
        // }
};