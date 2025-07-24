#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'

using namespace std;

int main(){ fastio
    int t, n, s, minim, maxim, value; cin >> t;
    while(t--){
        cin >> n >> s;

        for(int i = 0; i < n; i++){
            cin >> value;
            if(i == 0) minim = min(value, s);
            if(i == n - 1) maxim = max(value, s);
        }

        cout << min(2 * abs(s - minim)  + abs(s - maxim), abs(s - minim) + 2 * abs(s - maxim)) << endl;

    }

}