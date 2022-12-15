#include <vector>

void FileCompression(char* filename, vector<EncodedNode> result, int len, char* charArray){
    for(int i=0; i<len; i++){
        for(int j=0; j < result.size(); j++){
            if(charArray[i] == result[j].character){
                charArray[i]
            }
        }
    }
}