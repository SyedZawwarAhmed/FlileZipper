#include <iostream>
#include "readFile.cpp"
#include "getFrequencies.cpp"

using namespace std;

int main()
{
    char fileName[] = "inputFile.txt";
    char *charArray = readFile(fileName);
    getFrequencies(charArray);
    return 0;
}