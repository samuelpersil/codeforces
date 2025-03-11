#include <iostream>

int main(){
    int n, t;
    std::string stack;
    std::cin >> n >> t;
    std::cin >> stack;
    for(int i = 0; i < t; i++){
        for(int j = 0; j < n - 1; j++){
            if(stack[j] == 'B' && stack[j+1] == 'G'){
                stack[j] = 'G';
                stack[j + 1] = 'B';
                j++;
            }
        }
    }
    for(int i = 0; i< n; i++){
        std::cout << stack[i];
    }
    
    return 0;
}