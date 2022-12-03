#include <iostream>
#include "readFile.cpp"
#include "Character.h"
#include "getFrequencies.cpp"
#include "findMin.cpp"
#include "BinarySearchTreeNode.h"
#include "hauffmanTree.cpp"

using namespace std;

int main()
{
    char fileName[] = "../inputFile.txt";
    char *charArray = readFile(fileName);
    Character *frequenciesArray = getFrequencies(charArray);
    hauffmanTree(frequenciesArray);
    for (int i =0; i<256; i++) 
    if (frequenciesArray[i].frequency > 0) cout << frequenciesArray[i].character << "    " << frequenciesArray[i].frequency << endl;
    cout << findMin(frequenciesArray) << endl;
    return 0;
}