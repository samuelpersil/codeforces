#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int n; cin >> n;
    int zeros = 0, product = 1;
    ll ans = 0;

    int arr[n];
    for(auto &x : arr){
        cin >> x;
        if(x > 1){
            ans += (x - 1);
            x = 1;
        }
        else if(x < -1){
            ans += (-x - 1);
            x = -1;
        }
        else if(x == 0){
            zeros++;
        }
        product *= x;
    }

    if(zeros == 0){
        if(product == -1){
            ans += 2;
        }
    }

    else{
        ans += zeros;
    }

    cout << ans << endl;

    return 0;
}