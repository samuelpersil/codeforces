#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int t; cin >> t;

    while(t--){
        int n, x; cin >> n >> x;

        int value, first = -1, last = -1;
        for(int i = 0; i < n; i++){
            cin >> value;
            if(value){
                if(first == -1){
                    first = i;
                }
                last = i;
            }
        }

        if(first == -1) cout << "YES" << endl;
        else cout << (last - first + 1 <= x ? "YES" : "NO") << endl;
    }

    return 0;
}