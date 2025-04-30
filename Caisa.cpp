#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, pylon, lastpylon = 0, energy = 0, minimum = 0; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> pylon;
        energy += lastpylon - pylon;
        minimum = min(minimum, energy);
        lastpylon = pylon;
    }
    cout << abs(minimum);
}