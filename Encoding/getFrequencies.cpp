#include <iostream>
#include <string>
#include <cstring>
// #include "Character.h"

using namespace std;

Character *getFrequencies(char charArray[])
{
    size_t len = strlen(charArray);
    Character *frequenciesArray = new Character[256];
    for (int i=0; i < 256; i++) {
        frequenciesArray[i].character = char(i);
    }

    for (int i = 0; i < len; i++)
    {
        int index = int(charArray[i]);
        // frequenciesArray[index].character = charArray[i];
        frequenciesArray[index].frequency++;
    }
    return frequenciesArray;
}