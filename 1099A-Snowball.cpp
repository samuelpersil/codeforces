#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int w, h; cin >> w >> h;
    int u1, d1, u2, d2; cin >> u1 >> d1 >> u2 >> d2;

    int now = w;
    for(int i = h; i >= 0; i--){
        now += i;

        if(i == d1){
            now = max(0, now - u1);
        }
        else if(i == d2){
            now = max(0, now - u2);
        }
    }

    cout << now << endl;


    return 0;
}