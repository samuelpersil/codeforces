#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'

using namespace std;

int main(){ fastio
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        if(n == 0){
            cout << "0 0" << endl;
            continue;
        }

        int root = sqrt(n);

        if(root * root == n){
            cout << "1 " << root - 1 << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
}