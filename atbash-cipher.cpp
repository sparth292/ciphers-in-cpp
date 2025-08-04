//AtBash Cipher
#include <iostream>
#include <string>
int main() {
    
    std::string input = "r olev blf";
    char printChar;
    int operation;
    
    for(int i = 0 ; i < input.length() ; i++){
      
        if(input[i] == ' ')  std::cout << " ";
        
        else{
           printChar = input[i];
           operation = 122 - printChar;
           std::cout << (char)(97 + operation);
        }
    }

    return 0;
}
