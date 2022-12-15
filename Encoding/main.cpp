#include <iostream>
#include <vector>
#include "readFile.cpp"
#include "BinarySearchTreeNode.h"
#include "getFrequencies.cpp"
#include "getMinIndex.cpp"
#include "hauffmanTree.cpp"
#include "EncodedNode.h"
#include "encode.cpp"
// #include "FileCompression.cpp"

using namespace std;

int main()
{
    char fileName[] = "../inputFile.txt";
    char *charArray = readFile(fileName);

    vector<BinarySearchTreeNode> frequenciesArray = getFrequencies(charArray);

    // for (int i = 0; i < 22; i++)
    //     cout << frequenciesArray[i].character << "    " << frequenciesArray[i].frequency << endl;

    // cout << frequenciesArray[getMinIndex(frequenciesArray)].character << "   " << frequenciesArray[getMinIndex(frequenciesArray)].frequency << endl;
    BinarySearchTreeNode *root_Node = hauffmanTree(frequenciesArray);
    EncodedNode enc_node;
    enc_node.character = root_Node->character;
    vector<char> weight = {};
    enc_node.weight = weight;
    vector<EncodedNode> encoded_Node_Vector = {enc_node};
    // vector<EncodedNode> result = encode(root_Node, weight);
    encode(root_Node, weight);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i].character << "  ";
        for (int j = 0; j < result[i].weight.size(); j++)
        {
            cout << result[i].weight[j];
        }
        cout << endl;
    }
    // FileCompression(fileName, result, int(len),charArray);
    return 0;
}