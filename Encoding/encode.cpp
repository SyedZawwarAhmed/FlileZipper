#include <vector>

using namespace std;

vector<EncodedNode> result = {};

void encode(BinarySearchTreeNode *root_Node, vector<char> weight)
{
    if (root_Node->character != '\0')
    {
        EncodedNode encoded_Node;
        encoded_Node.character = root_Node->character;
        encoded_Node.weight = weight;
        result.push_back(encoded_Node);
    }
    if (root_Node->character == '\0')
    {
        vector<char> tempWeight(weight);
        tempWeight.push_back('0');
        // weight.push_back('0');
        encode(root_Node->left_child, tempWeight);
    }
    if (root_Node->character == '\0')
    {
        vector<char> tempWeight(weight);
        tempWeight.push_back('1');
        // weight.push_back('1');
        encode(root_Node->right_child, tempWeight);
    }
}