#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
#define F first
#define S second
 
using namespace std;
 
int main(){fastio
    int t, n, j, k, j_strenght, value, max;
    cin >> t;
 
    while(t--){
        cin >> n >> j >> k;
        max = 0;
        for(int i = 0; i < n; i++){
            cin >> value;
            if(i == j - 1) j_strenght = value;
            if(value >= max) max = value;
        }
 
        if(k >= 2){
            cout << "YES" << endl;
        }
        else if(j_strenght >= max){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
 
 
    return 0;
}