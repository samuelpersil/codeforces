#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
#define ll long long

using namespace std;

int main(){fastio
    int t; cin >> t;

    while(t--){
        int a, b, c, d; cin >> a >> b >> c >> d;

        if(a == b && b == c && c == d) cout << "YES" << endl;
        else cout << "NO" << endl;
    }


    return 0;
}