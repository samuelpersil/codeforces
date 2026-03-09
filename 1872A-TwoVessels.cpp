#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int t; cin >> t;

    while(t--){
        double a, b, c; cin >> a >> b >> c;
        cout << (ceil(abs(a - b) / c / 2)) << endl;
    }

    return 0;
}