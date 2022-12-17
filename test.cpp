#include <iostream>
#include <string>
#include <fstream>
#include <bitset>
using namespace std;

// gives the number of bytes we need to store in binary file
int multiple(string encoded_string){
    int added_bits = 0;
    if(encoded_string.length()%8 != 0){
        added_bits = 8 - encoded_string.length()%8;
    }
    for(int i=1; i<100; i++){
        if(8*i == encoded_string.length() + added_bits){
            return i;
        }
    }
    return 0;
}

void getEncodedBinaryFile(string encoded_string){
    int m = multiple(encoded_string);
    ofstream myfile;
    myfile.open("D:\\Annas Docs\\fourth sem\\DSA\\FlileZipper\\encoded_file.bin",ios::binary);
    // Define a bitset that can hold sizeof(unsigned long) bits
    bitset<100> bits(encoded_string);

    unsigned long binary_value = bits.to_ulong();

    // // write the binary value to file
    myfile.write((const char*)&binary_value, m);
    myfile.close();
}

int main(){
    string encoded_string = "10101010010101010010";
    getEncodedBinaryFile(encoded_string);

    return 0;

}
