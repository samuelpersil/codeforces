#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cout.tie(nullptr); cin.tie(nullptr);
#define endl '\n'
#define ll long long

using namespace std;

int main(){fastio
    int n; cin >> n;
    ll array[n];

    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    for(int i = 0; i < n/2; i+=2){
        swap(array[i], array[n - i - 1]);
    }

    for(int i = 0; i < n; i++){
        cout << array[i] << " ";
    }
}