#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int n; cin >> n;

    int today = 0;

    while(n--){
        int s, d; cin >> s >> d;

        today++;

        if(today < s) today = s;
        today += (d - ((today - s) % d)) % d;
    }

    cout << today << endl;

    return 0;
}