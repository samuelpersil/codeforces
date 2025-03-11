#include <iostream>

int main(){
    using std::string, std::cout, std::cin;
    int n;
    cin >> n;
    string words[n];
    for(int i = 0; i < n; i++){
        cin >> words[i];
        if(words[i].length() > 10){
            string temp = words[i];
            words[i] = temp.front() + std::to_string(temp.length() - 2) + temp.back();
        }
        
    }
    for(int i = 0; i < n; i++){
        cout << words[i] << std::endl;
    }


    return 0;
}