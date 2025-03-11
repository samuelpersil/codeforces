#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n; cin >> n;
    int luckies = 0;
    while(n >= 1){
        if(n % 10 == 4 || n % 10 == 7){
            luckies++;
        }
        n = n / 10;
    }
    cout << (luckies % 10 == 4 || luckies % 10 == 7 ? "YES" : "NO");
    return 0;
}