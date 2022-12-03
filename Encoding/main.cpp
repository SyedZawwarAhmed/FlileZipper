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
    for (int i = 0; i < 13; i++)
        cout << frequenciesArray[i].character << "    " << frequenciesArray[i].frequency << endl;
    cout << findMin(frequenciesArray).character << "   " << findMin(frequenciesArray).frequency << endl;
    return 0;
}