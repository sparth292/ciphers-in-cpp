//Good old Caesar Cipher
#include <iostream>
#include <string>
int main() {
    
    std::string input = "Hello";
    int addChar;
    char printChar;
    
    for(int i = 0 ; i < input.length() ; i++){
        
        addChar = input[i];
        addChar += 3;
        printChar = addChar;
        std::cout << printChar;
        
    }

    return 0;
}
