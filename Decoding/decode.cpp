void decode(string encoded_file_path, BinarySearchTreeNode* root_node, int encoded_string_length){
    char* s1;
    string decoded_string;
    ifstream file;
    file.open(encoded_file_path, ios::binary);
    file.read(s1, 3);
    string str(s1);              // converting char* to string
    reverseStr(str);
    bitset<8> binary_representation;
    for (char c : str) {
        binary_representation = c;
        cout<<binary_representation<<endl;
    }
    file.close();
}