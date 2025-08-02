#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){ fastio
    ll a, b, n; cin >> a >> b >> n;


    for(ll i = 0; i <= 9; i++){
        if((a * 10 + i) % b == 0){
            a = a*10 + i;
            break;
        }
        else if(i == 9){
            cout << -1;
            return 0;
        }
    }

    cout << a;
    for(int  i = 0; i < n - 1; i++){
        cout << 0;
    }

}