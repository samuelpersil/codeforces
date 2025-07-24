#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
#define F first
#define S second

using namespace std;

int main(){fastio
    int t, n; cin >> t;
    while(t--){
        cin >> n;
        if(n % 4 == 0){
            cout << "Bob";
        }
        else{
            cout << "Alice";
        }
        cout << endl;
    }


    return 0;
}