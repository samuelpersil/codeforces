#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    for(int i = n + 1; i <= 50; i++){
        bool isprime = true;
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                isprime = false;
                break;
            }
        }
        if(isprime == true){
            if(i == m) cout << "YES";
            else cout << "NO";
            return 0;
        }
        isprime = false;
    }
    cout << "NO";
    return 0;
}