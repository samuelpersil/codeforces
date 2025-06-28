#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr);

using namespace std;

int main(){
    int t, n, k, x, sum, elems; cin >> t;
    while(t--){
        cin >> n >> k >> x;
        if(n < k || k-1 > x){
            cout << -1 << endl;
            continue;
        }

        sum = (0 + k-1) * k / 2;

        if(k == x){
            sum += (k - 1) * (n - k);
        }
        else sum += x * (n - k);

        cout << sum << '\n';

    }

    return 0;
}