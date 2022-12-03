#include <iostream>
#include <fstream>
#include <string>

using namespace std;

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