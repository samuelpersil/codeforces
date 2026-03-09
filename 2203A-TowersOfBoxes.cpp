#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int t; cin >> t;
    while(t--){
        int n, m, d; cin >> n >> m >> d;

        int ans = d/m + 1;
        
        cout << (n / ans + (n % ans == 0 ? 0 : 1)) << endl;
    }
}