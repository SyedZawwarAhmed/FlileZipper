BinarySearchTreeNode* hauffmanTree(const vector<BinarySearchTreeNode> frequenciesArray){
    vector<BinarySearchTreeNode*> temp_frequencies;
    for(int i=0; i<frequenciesArray.size(); i++){
        BinarySearchTreeNode* temp_frequency_node = new BinarySearchTreeNode();
        temp_frequency_node->character = frequenciesArray[i].character;
        temp_frequency_node->frequency = frequenciesArray[i].frequency;
        temp_frequencies.push_back(temp_frequency_node);
    }
    while(temp_frequencies.size() != 1){

        // create a binary tree BinarySearchTreeNode and put the two minimum in left and right child

        int minNumIndex;
        BinarySearchTreeNode* temp_Node = new BinarySearchTreeNode();

        // find two minimum frequencies
        for(int i=0; i<=1; i++){
            minNumIndex = getMinIndex(temp_frequencies);
            if(i==0){
                temp_Node->left_child = temp_frequencies[minNumIndex];
            }
            else{
                temp_Node->right_child = temp_frequencies[minNumIndex];
            }
            temp_Node->frequency += temp_frequencies[minNumIndex]->frequency;
            // delete min_struct from frequenciesArray;
            temp_frequencies.erase(temp_frequencies.begin()+minNumIndex);
        }
        

        // Add this tree BinarySearchTreeNode to given_array
        temp_frequencies.push_back(temp_Node);
    }
    return temp_frequencies[0];
}