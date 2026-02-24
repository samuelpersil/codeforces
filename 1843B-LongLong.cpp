#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        int arr[n];
        for(auto &x : arr){
            cin >> x;
        }

        ll sum = 0;
        int ops = 0, negative_sequence = 0;

        for(int i = 0; i < n; i++){
            if(arr[i] < 0 && !negative_sequence){
                ops++;
                negative_sequence = 1;
            }
            else if(arr[i] > 0 && negative_sequence){
                negative_sequence = 0;
            }
            sum += abs(arr[i]);
        }

        cout << sum << " " << ops << endl;
    }

    return 0;
}