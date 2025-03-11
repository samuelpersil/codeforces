#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, answer = 0;
    cin >> n >> m;
    for(int i = 0; i < 32; i++){
        for(int j = 0; j < 32; j++){
            if(i * i + j == n && i + j * j == m) answer++;
        }
    }
    cout << answer;
}