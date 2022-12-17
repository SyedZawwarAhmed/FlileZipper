using namespace std;
void getEncodedBinaryFile(string encoded_string){
    // ofstream codedFile("codedFile.txt", ios::binary);
    ofstream myfile;
    myfile.open("D:\\Annas Docs\\fourth sem\\DSA\\FlileZipper\\Encoding\\encoded_file.bin",ios::binary);
    // Define a bitset that can hold sizeof(unsigned long) bits
    bitset<sizeof(unsigned long) * 8> bits(encoded_string);

    unsigned long binary_value = bits.to_ulong();

    // write the binary value to file
    myfile.write((const char*)&binary_value, sizeof(unsigned long));
}
