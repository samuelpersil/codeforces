#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
#define ll long long

using namespace std;

int main(){ fastio
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        int array[n], answer[n];

        for(int i = 0; i < n; i++){
            cin >> array[i];
        }

        for(int i = 0; i < n; i++){
            cout << n + 1 - array[i] << " ";
        }

        cout << endl;


    }
    
}