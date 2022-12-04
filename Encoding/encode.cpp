

vector<EncodedNode> encode(BinarySearchTreeNode* root_Node, vector<EncodedNode> encoded_Node_Vector){
    if(root_Node->character != NULL){
        // EncodedNode enc_node;
        // enc_node.character = root_Node->character;
        // enc_node.weight = weight;
        // encoded_Node.push_back(enc_node);
        for(int i =0; i<encoded_Node.size(); i++){
        cout<<encoded_Node[i].character<<"  ";
        for(int j=0; j<encoded_Node[i].weight.size(); j++){
            cout<<encoded_Node[i].weight[j];
        }
        cout<<endl;
    }
    }
    if(root_Node->character == NULL){
        encoded_Node_Vector.weight.push_back('0');
        encode(root_Node->left_child, weight);
    }
    if(root_Node->character == NULL){
        weight.push_back('1');
        encode(root_Node->right_child,weight);
    }
}