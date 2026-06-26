#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int n; cin >> n;

    int arr[n];

    for(int &x : arr){
        cin >> x;
    }

    int ones = 0, twos = 0, ans = 0, prev = -1;

    for(int x : arr){
        if(x != prev){
            ans = max(ans, min(ones, twos));
            if(x == 1){
                ones = 0;
            }
            else twos = 0;
        }

        if(x == 1) ones++;
        else twos++;
        
        ans = max(ans, min(ones, twos));
        prev = x;
    }

    cout << (ans * 2) << endl;

    return 0;
}