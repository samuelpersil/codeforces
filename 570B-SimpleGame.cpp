#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
#define ll long long

using namespace std;

int main(){
    int n, m; cin >> n >> m;

    if(n == 1) cout << 1;
    else if(m - 1 >= n - m) cout << m - 1;
    else cout << m + 1;
}