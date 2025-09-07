#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
#define ll long long

using namespace std;

ll expo(ll a, ll b){
    if(b == 0) return 1;
    if(b % 2 == 0) return expo(a, b/2) * expo(a, b/2);
    return expo(a, b - 1) * a;
}

int main(){ fastio
    int t; cin >> t;

    while(t--){
        ll k, x; cin >> k >> x;

        

        cout << x * expo(2, k) << endl;
    }
    
}