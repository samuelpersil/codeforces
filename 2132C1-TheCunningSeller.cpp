#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
#define ll long long

using namespace std;

ll mypow(ll a, ll b){
    if(b <= 0) return 1;
    ll answer = a;
    for(ll i = 0; i < b - 1; i++){
        answer *= a;
    }

    return answer;
}

int main(){fastio
    int t; cin >> t;
    ll x, answer;

    while(t--){
        cin >> x;

        answer = 0;
        string base3 = "";

        while(x > 0){
            base3 += x % 3 + '0';
            x /= 3;
        }

        ll size = base3.length();

        for(ll i = 0; i < size; i++){
            answer += (base3[i] - '0') * (mypow(3, i + 1) + i * mypow(3, i - 1));
        }

        cout << answer << endl;        
    }
}