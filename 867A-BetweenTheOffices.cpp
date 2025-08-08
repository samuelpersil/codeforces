#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'

using namespace std;

int main(){fastio
    int n; cin >> n;
    string s; cin >> s;

    char last = s[0];
    int good = 0, bad = 0;

    for(int i = 1; i < n; i++){
        if(last == 'S' && s[i] == 'F'){
            good++;
        }
        else if(last == 'F' && s[i] == 'S'){
            bad++;
        }

        last = s[i];
    }

    cout << (good > bad ? "YES" : "NO");
}