#include <iostream>

using namespace std;

// make a function to read a text file and return a char array
char* read_file(char* filename) {
    // open the file
    FILE* file = fopen(filename, "r");
    // get the size of the file
    fseek(file, 0, SEEK_END);
    int size = ftell(file);
    // reset the file pointer to the beginning of the file
    fseek(file, 0, SEEK_SET);
    // allocate memory for the file
    char* buffer = (char*)malloc(size + 1);
    // read the file into the buffer
    fread(buffer, 1, size, file);
    // close the file
    fclose(file);
    // add a null terminator to the end of the file
    buffer[size] = '\0';
    // return the buffer
    return buffer;
}



int main() {
    return 0;
}