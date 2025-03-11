#include <bits/stdc++.h>

using namespace std;

int main(){
    float n; cin >> n;
    float fraction;
    for(int i = 0; i < n; i++){
        float drink; cin >> drink;
        fraction += drink;
    }
    cout << fraction / n;
}