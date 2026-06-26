#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int n; cin >> n;
    int biggest1 = 0;
    while(n--){
        int val; cin >> val;
        biggest1 = max(biggest1, val);
    }

    int m; cin >> m;
    int biggest2 = 0;
    while(m--){
        int val; cin >> val;
        biggest2 = max(biggest2, val);
    }

    cout << biggest1 << " " << biggest2 << endl;

    return 0;
}