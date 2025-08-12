#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
#define int long long

using namespace std;

int32_t main(){ fastio
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        int a[n], b[n], answer = 0;

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        for(int i = 0; i < n; i++){
            cin >> b[i];

            if(a[i] > b[i]){
                answer+= a[i] - b[i];
            }
        }


        cout << answer + 1 << endl;
    }
}