#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    ll n, k; cin >> n >> k;

    while(k--){
        if(n % 10 == 0){
            n /= 10;
        }
        else{
            n--;
        }
    }

    cout << n << endl;

}