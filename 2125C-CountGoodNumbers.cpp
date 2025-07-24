#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define F first
#define S second
#define endl '\n'
#define ll long long
#define all(x) x.begin(), x.end()

using namespace std;

int main(){ fastio
    ll t; cin >> t;
    while(t--){
        ll l, r, answer = 0; cin >> l >> r;

        answer += (r/2 + r/3 + r/5 + r/7 - r/(2*3) - r/(2*5) - r/(2*7) - r/(3*5) - r/(3*7) - r/(5*7) + r/(2*3*5) + r/(2*3*7) + r/(2*5*7) + r/(3*5*7) - r/(2*3*5*7));
        answer -= ((l-1)/2 + (l-1)/3 + (l-1)/5 + (l-1)/7 - (l-1)/(2*3) - (l-1)/(2*5) - (l-1)/(2*7) - (l-1)/(3*5) - (l-1)/(3*7) - (l-1)/(5*7) + (l-1)/(2*3*5) + (l-1)/(2*3*7) + (l-1)/(2*5*7) + (l-1)/(3*5*7) - (l-1)/(2*3*5*7));

        cout << r - (l-1) - answer << endl;
    }
}