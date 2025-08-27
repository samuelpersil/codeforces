#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
#define ll long long

using namespace std;

int main(){fastio
    int n; cin >> n;

    if(n == 1 || n == 2){
        cout << "No";
    }
    else if(n % 2 == 1){
        cout << "Yes" << endl;
        cout << "1 " << n << endl;
        cout << n - 1 << " ";
        for(int i = 1; i <= n; i++){
            if(i != n) cout << i << " ";
        }
    }
    else{
        cout << "Yes" << endl;
        cout << "1 " << n/2 << endl;
        cout << n - 1 << " ";
        for(int i = 1; i <= n; i++){
            if(i != n/2) cout << i << " ";
        }
    }
}