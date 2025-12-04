#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int n; cin >> n;

    int ans = 0;

    for(int i = 1; i <= n / 2; i++){
        if(n % i == 0) ans++;
    }

    cout << ans << endl;


    return 0;
}