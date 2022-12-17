#include <iostream>
#include <string>
#include <cstring>

using namespace std;
size_t len;

vector<BinarySearchTreeNode> getFrequencies(char charArray[])
{
    len = strlen(charArray);
    vector<BinarySearchTreeNode> frequenciesArray(256);
    for (int i = 0; i < 256; i++)
    {
        frequenciesArray[i].character = char(i);
    }

    for (int i = 0; i < len; i++)
    {
        int index = int(charArray[i]);
        frequenciesArray[index].frequency++;
    }

    int filteredFrequenciesArraySize = 0;
    for (int i = 0; i < 256; i++)
        if (frequenciesArray[i].frequency > 0)
            filteredFrequenciesArraySize++;

    int filteredFrequenciesArrayIndex = 0;
    vector<BinarySearchTreeNode> filteredFrequenciesArray(filteredFrequenciesArraySize);
    for (int i = 0; i < 256; i++)
        if (frequenciesArray[i].frequency > 0)
            filteredFrequenciesArray[filteredFrequenciesArrayIndex++] = frequenciesArray[i];

    return filteredFrequenciesArray;
}