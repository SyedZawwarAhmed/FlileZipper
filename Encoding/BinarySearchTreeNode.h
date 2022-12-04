#include <iostream>
using namespace std;

class BinarySearchTreeNode{
    public:
        char character = NULL;
        int frequency = 0;
        BinarySearchTreeNode *left_child;
        BinarySearchTreeNode *right_child;

        BinarySearchTreeNode(){
            this->left_child = NULL;
            this->right_child = NULL;
        }
        BinarySearchTreeNode* insert(BinarySearchTreeNode* parent_Node){
            
        }
        // ~node(){
        //     delete left_child, right_child;
        // }
};