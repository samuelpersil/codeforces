#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){ fastio
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        int possible = 1;

        vector<int> a(n), b(m);

        for(int &x : a){
            cin >> x;
        }
        for(int &x : b){
            cin >> x;
        }

        sort(b.begin(), b.end());

        a[0] = min(b[0] - a[0], a[0]);
        for(int i = 1; i < n; i++){
            int l = 0, r = m - 1, mid, ans = 1e9;
            if(a[i] >= a[i - 1]) ans = a[i];

            while(l <= r){
                mid = (l + r) / 2;
                if(b[mid] - a[i] >= a[i - 1]){
                    ans = min(ans, b[mid] - a[i]);
                    r = mid - 1;
                }
                else{
                    l = mid + 1;
                }
            }

            a[i] = ans;

            if(a[i] == 1e9 || a[i] < a[i - 1]){
                possible = 0;
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << endl;
    }
}