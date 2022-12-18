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
    int i=1;
    while(i*32 < encoded_string.length()){
        bitset<32> bits(encoded_string.substr((i-1)*32, 32));
        unsigned long binary_value = bits.to_ulong();
        myfile.write((const char*)&binary_value, 4);
        i++;
    }
    bitset<32> bits(encoded_string.substr((i-1)*32+1, encoded_string.length()-((i-1)*32+1)+1));
    unsigned long binary_value = bits.to_ulong();
    myfile.write((const char*)&binary_value,  multiple(encoded_string.substr((i-1)*32+1, encoded_string.length()-((i-1)*32+1)+1)));

    // // write the binary value to file
    myfile.close();
}

int main(){
    string encoded_string = "101101100010010111100001101011011111110110101111110111111100010111111010110001011111101011000101111110101100010111111010110001111101110000101111110111000001100100011000110010111001000110011100000111000110011001000111010000011000110011101010100001100100101100110011100010010111000111001011111001111011001110101101001001101100000101111101010100011101010101101101000011101111010110110110010001010000110010010110011101010101101100010010111100001101011011111110110101111110111111100010111111010110001011111101011000101111110101100010111111010110001111101110000101111110111000";
    getEncodedBinaryFile(encoded_string);

    return 0;

}
