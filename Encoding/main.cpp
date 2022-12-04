#include <iostream>
#include <vector>
#include "readFile.cpp"
#include "BinarySearchTreeNode.h"
#include "getFrequencies.cpp"
#include "getMinIndex.cpp"
#include "hauffmanTree.cpp"
#include "EncodedNode.h"
#include "encode.cpp"

using namespace std;

int main()
{
    char fileName[] = "../inputFile.txt";
    char *charArray = readFile(fileName);
    
    vector<BinarySearchTreeNode> frequenciesArray = getFrequencies(charArray);

    // for (int i = 0; i < 3; i++)
    //     cout << frequenciesArray[i].character << "    " << frequenciesArray[i].frequency << endl;

    // cout << frequenciesArray[getMinIndex(frequenciesArray)].character << "   " << frequenciesArray[getMinIndex(frequenciesArray)].frequency << endl;
    BinarySearchTreeNode* root_Node = hauffmanTree(frequenciesArray);
    EncodedNode enc_node;
    enc_node.character = root_Node->character; 
    vector<char> weight = {'0'};
    enc_node.weight = weight;
    vector<EncodedNode> encoded_Node_Vector = {enc_node};
    encode(root_Node,encoded_Node_Vector);
    // for(int i =0; i<encoded_Node_Vector.size(); i++){
    //     cout<<encoded_Node_Vector[i].character<<"  ";
    //     for(int j=0; j<encoded_Node_Vector[i].weight.size(); j++){
    //         cout<<encoded_Node_Vector[i].weight[j];
    //     }
    //     cout<<endl;
    // }
    return 0;
}