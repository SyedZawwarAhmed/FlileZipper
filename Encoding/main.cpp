#include <iostream>
#include "Character.h"
#include "readFile.cpp"
#include "getFrequencies.cpp"

using namespace std;

int main()
{
    char fileName[] = "inputFile.txt";
    char *charArray = readFile(fileName);
    Character *frequenciesArray = getFrequencies(charArray);
    for (int i =0; i<256; i++) 
    if (frequenciesArray[i].frequency > 0) cout << frequenciesArray[i].character << "    " << frequenciesArray[i].frequency << endl;
    return 0;
}