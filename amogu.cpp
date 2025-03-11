#include <iostream>

void translate(std::string noun, int size){
    for(int j = 0; j < size; j++){
        if(j < size - 2){
            std::cout << noun[j];
        }
        else if(j == size - 2 && noun[j] == 'u'){
            std::cout << 'i';
            break;
        }
        else{
            std::cout << "us";
            break;
        }
    }
    std::cout << std::endl;
}

int main(){
    int n;
    int size;
    std::cin >> n;
    std::string nouns[n];
    for(int i = 0; i < n; i++){
        std::cin >> nouns[i];
    }
    for(int i = 0; i < n; i++){
        size = nouns[i].length();
        translate(nouns[i], size);
    }

    return 0;
}