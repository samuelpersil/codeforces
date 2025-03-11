#include <iostream>
#include <map>

int main(){
    std::string name;
    std::cin >> name;
    std::map<char, int> letters;
    int answer = 0;
    for(int i = 0, size = name.length(); i < size; i++){
        if(letters[name[i]] == 0){
            letters[name[i]] = 1;
            answer++;
        }
        else{
            letters[name[i]]++;
        }
    }
    answer % 2 == 1 ? std::cout << "IGNORE HIM!" : std::cout << "CHAT WITH HER!";
    
    return 0;
}