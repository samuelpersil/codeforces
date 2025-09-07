#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
#define ll long long

using namespace std;

int main(){ fastio
    int t; cin >> t;

    while(t--){
        ll a, b, k; cin >> a >> b;

        if(b % 2 == 0) k = b / 2;
        else k = b;

        if((a * k + b / k) % 2 == 0) cout << a * k + b / k << endl;
        else cout << -1 << endl;
    }    
}