#include "Character.h"

BinarySearchTreeNode* hauffmanTree(Character* frequenciesArray){
    Character* temp_frequenciesArray = frequenciesArray;
    while(temp_frequenciesArray != 1){

        // create a binary tree BinarySearchTreeNode and put the two minimum in left and right child
        BinarySearchTreeNode* root_Node;

        Character min_struct, root;
        // find two minimum frequencies
        min_struct = findMin(temp_frequenciesArray);
        root_Node->left_child = min_struct.character;
        root_Node->val = min_struct.frequency;
        // delete min_struct from temp_frequenciesArray;

        min_struct = findMin(temp_frequenciesArray);
        root_Node->right_child = findMin(temp_frequenciesArray);
        root_Node->val += min_struct.frequency;
        // delete min_struct from temp_frequenciesArray;

        // Add this tree BinarySearchTreeNode to given_array
        root.frequency = root_Node.val;
        temp_frequenciesArray.insert(root_Node);
    }
}