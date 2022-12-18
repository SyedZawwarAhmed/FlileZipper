using namespace std;
void getEncodedBinaryFile(string encoded_string){
    ofstream myfile;
    myfile.open("D:\\Annas Docs\\fourth sem\\DSA\\FlileZipper\\Encoding\\enc_file.bin",ios::binary);
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
