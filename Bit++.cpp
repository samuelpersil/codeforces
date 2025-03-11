#include <bits/stdc++.h>

int main(){
    int n, x = 0;
    std::string operation;
    std::cin >> n;
    while(n--){
        std::cin >> operation;
        if(std::count(operation.begin(), operation.end(), '+')){
            x++;
        }
        else{
            x--;
        }
    }
    std::cout << x;

    return 0;
}