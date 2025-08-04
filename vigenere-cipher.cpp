//Vigenere Cipher
#include <iostream>
#include <string>
int main() {
    
    std::string input = "hello";
    std::string key = "key";
    std::string finalKey = "";
    int j = 0;
    char printChar;
    
    for(int i = 0 ; i < input.length() ; i++){
        
        if(j == key.length()) 
            j = 0;    
        finalKey += key[j];
        ++j;
        
    }
    
    for(int i = 0 ; i < input.length() ; i++){
        
        printChar = (input[i] - 97) + (finalKey[i] - 97);
        std::cout << (char)((int)((printChar%26)+97)); 
        
    }

    return 0;
}
