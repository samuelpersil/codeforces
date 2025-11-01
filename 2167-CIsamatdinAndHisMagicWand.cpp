#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
#define ll long long

using namespace std;

int main(){fastio
    int q; cin >> q;

    while(q--){
        int n; cin >> n;

        int arr[n], even = 0, odd = 0;

        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] % 2 == 0) even++;
            else odd++;
        }

        if(even && odd) sort(arr, arr + n);

        for(auto c : arr){
            cout << c << " ";
        }
        cout << endl;


    }


    return 0;
}