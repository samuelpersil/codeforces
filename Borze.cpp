#include <iostream>

int main(){
    std::string message;
    std::cin >> message;
    for(int i = 0; i < message.length(); i++){
        if(message[i] == '.'){
            std::cout << '0';
        }
        else if(message[i] == '-' && message[i + 1] == '-'){
            std::cout << '2';
            i++;
        }
        else if(message[i] == '-' && message[i + 1] == '.'){
            std::cout << '1';
            i++;
        }
    }
    return 0;
}