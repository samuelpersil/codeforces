#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int t; cin >> t;

    while(t--){
        string s; cin >> s;
        int repeat = 0, size = s.length();

        for(int i = 0; i < size - 1; i++){
            if(s[i] == s[i + 1]) repeat++;
        }

        if(repeat) cout << 1 << endl;
        else cout << size << endl;

    }

}

// gtcccc
// 


// gttc
// gcc
// gg
// g