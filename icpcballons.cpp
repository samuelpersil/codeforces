#include <iostream>

int main(){
    int t;
    int n;
    std::string s;
    std::cin >> t;
    int results[t] = {0};

    for(int i = 0; i < t; i++){
        int ABC[26] = {0};
        std::cin >> n;
        std::cin >> s;
        for(int j = 0; j < n; j++){
            ABC[s[j] - 65]++;
            if(ABC[s[j] - 65] == 1){
                results[i] += 2;
            }
            else if(ABC[s[j] - 65] >= 2){
                results[i]++;
            }
        }
    }
    for(int i = 0; i < t; i++){
        std::cout << results[i] << std::endl;
    }
    return 0;
}