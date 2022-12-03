#include "Character.h"

BinarySearchTreeNode* hauffmanTree(Character* frequenciesArray){
    Character* temp_frequenciesArray = frequenciesArray;
    while(temp_frequenciesArray != 1){

        // create a binary tree BinarySearchTreeNode and put the two minimum in left and right child
        BinarySearchTreeNode* root_Node;

        int minNumIndex;

        Character root;
        // find two minimum frequencies
        minNumIndex = findMin(temp_frequenciesArray);
        root_Node->left_child = frequenciesArray[minNumIndex].character;
        root_Node->val = min_struct.frequency;
        // delete min_struct from temp_frequenciesArray;

        minNumIndex = findMin(temp_frequenciesArray);
        root_Node->right_child = frequenciesArray[minNumIndex].character;
        root_Node->val += min_struct.frequency;
        // delete min_struct from temp_frequenciesArray;

        // Add this tree BinarySearchTreeNode to given_array
        root.frequency = root_Node.val;
        root.n = root_Node;
        temp_frequenciesArray.insert(root_Node);
    }
}