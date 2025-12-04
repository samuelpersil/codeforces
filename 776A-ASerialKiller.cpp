#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio

    string a, b; cin >> a >> b;
    cout << a << " " << b << endl;

    int n; cin >> n;

    while(n--){
        string c, d; cin >> c >> d;

        if(c == a){
            a = d;
        }
        else b = d;

        cout << a << " " << b << endl;
    }

    return 0;
}