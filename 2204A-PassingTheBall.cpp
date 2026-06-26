#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        for(int i = 1; i < n; i++){
            if(s[i] == 'L'){
                cout << i + 1 << endl;
                break;
            }
        }
    }

    return 0;
}