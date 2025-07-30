#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
#define ll long long

using namespace std;

int main(){ fastio
    int t; cin >> t;
    while(t--){
        ll a, b, n; cin >> a >> b >> n;

        ll results[] = {a, b, a ^ b};

        cout << results[n % 3] << endl;
    }

}