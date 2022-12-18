#include <vector>

string FileCompression(char* charArray, int length){
    ofstream EncodedFile("encoded_text.txt");
    string encoded_string = "";
    for(int i=0; i<length; i++){
        for(int j=0; j < result.size(); j++){
            if(charArray[i] == result[j].character){
                vector<char> w;
                w = result[j].weight;
                for(const char character: w)
                encoded_string+=character;
                encoded_string += '\0';
            }
        }
    }
    cout<<encoded_string;
    return encoded_string;

}


