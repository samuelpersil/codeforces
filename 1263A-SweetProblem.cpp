#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int t; cin >> t;

    while(t--){
        int arr[3];

        for(int i = 0; i < 3; i++){
            cin >> arr[i];
        }

        sort(arr, arr + 3, greater<int>());

        if(arr[0] >= arr[1] + arr[2]){
            cout << arr[1] + arr[2] << endl;
        }
        else{
            cout << (arr[0] + arr[1] + arr[2]) / 2 << endl;
        }

    }
}