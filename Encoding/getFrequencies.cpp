#include <iostream>
#include <string>
#include <cstring>

using namespace std;

Character *getFrequencies(char charArray[])
{
    size_t len = strlen(charArray);
    Character *frequenciesArray = new Character[256];
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
    Character* filteredFrequenciesArray = new Character[filteredFrequenciesArraySize];
    for (int i = 0; i < 256; i++)
        if (frequenciesArray[i].frequency > 0)
            filteredFrequenciesArray[filteredFrequenciesArrayIndex++] = frequenciesArray[i];

    delete frequenciesArray;
    return filteredFrequenciesArray;
}