#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int possible(int n, int m){
    if(n == m) return 1;
    else if(n % 3 == 0){
        return (possible(n / 3, m) | possible(2 * n / 3, m));
    }
    return 0;
}

int main(){fastio
    int t; cin >> t;

    while(t--){
        int n, m; cin >> n >> m;

        cout << (possible(n, m) ? "YES" : "NO") << endl;
    }

}