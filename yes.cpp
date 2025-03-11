#include <iostream>

std::string check(std::string word){
    if(word.length() == 2){
        if(toupper(word[0]) == 'N' && toupper(word[1]) == 'O'){
            return "YES\n";
        }
    }
    else if(word.length() == 3){
        if(toupper(word[0]) == 'Y' && toupper(word[1]) == 'E' && toupper(word[2]) == 'S'){
            return "YES\n";
        }
    }
    return "NO\n";
}

int main(){
    int n;
    std::cin >> n;
    std::string tests[n];
    for(int i = 0; i < n; i++){
        std::cin >> tests[i];
    }
    for(int i = 0; i < n; i++){
        std::cout << check(tests[i]);
    }
    return 0;
}