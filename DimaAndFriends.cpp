#include <bits/stdc++.h>

int main(){
    int n, actual, fingers = 0, answer = 0;
    std::cin >> n;

    for(int i = 0; i < n; i++){
        std::cin >> actual;
        fingers += actual;
    }
    for(int i = 1; i <= 5; i++){
        if((fingers + i) % (n + 1) != 1){
            answer++;
        }
    }
    std::cout << answer;


    return 0;
}