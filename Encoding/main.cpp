#include <iostream>
#include <fstream>
#include <string>
#include "node.h"
using namespace std;

node* hauffmanTree(){
    while(struct_array.lenght != 1){

        // create a binary tree node and put the two minimum in left and right child
        node* root_Node;
        // find two minimum frequencies
        root_Node->left_child = findMin(struct_array[i]);
        root_Node->val = struct_array[i].value;
        // delete struct_array[i];

        root_Node->right_child = findMin(struct_array[i]);
        root_Node->val += struct_array[i].value;
        // delete struct_array[i];

        // Add this tree node to given_array
        struct_array.insert(root_Node);
    }
}
struct findMin(int* struct_arr){
    struct min = struct_arr[0];
    for(int i=0; i<struct_arr.lenght; i++){
        if(struct_arr[i].val<min.val){
            min = struct_arr[i];
        }
    }
    return min;
}
char *readFile(char fileName[])
{
    FILE *f = fopen(fileName, "rb");
    fseek(f, 0, SEEK_END);
    long fsize = ftell(f);
    fseek(f, 0, SEEK_SET);

    char *string = (char *)malloc(fsize + 1);
    fread(string, fsize, 1, f);
    fclose(f);

    string[fsize] = 0;
    return string;
}

int main()
{
    char fileName[] = "inputFile.txt";
    char *charArray =  readFile(fileName);
    cout << charArray[0] << endl;
    cout << charArray[1] << endl;
    cout << charArray[2] << endl;
    cout << charArray[3] << endl;
    cout << charArray[4] << endl;

    return 0;
}