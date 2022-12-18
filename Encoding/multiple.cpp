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