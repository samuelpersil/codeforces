#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int t; cin >> t;

    while(t--){
        int n, k, p; cin >> n >> k >> p;

        if((k >= 0 && n * p < k) || (k < 0 && n * (-1 * p) > k)){
            cout << "-1" << endl;
            continue;
        }

        cout << abs(k / p) + (k % p == 0 ? 0 : 1)<< endl;
    }
}