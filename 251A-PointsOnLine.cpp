#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    ll n, d; cin >> n >> d;
    ll array[n];

    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    ll r = 0, answer = 0;

    for(int i = 0; i < n; i++){
        while(r + 1 < n && array[r + 1] - array[i] <= d) r++;
        if(r - i + 1 >=3){
            ll a = r - i;
            answer += a * (a - 1) / 2;
        }
    }

    cout << answer << endl;

}