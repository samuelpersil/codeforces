#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'

using namespace std;

int main(){ fastio
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int size = s.length();
        for(int i = size - 1; i >= 0; i--){
            if(s[i] == 'q') cout << 'p';
            else if(s[i] == 'p') cout << 'q';
            else cout << s[i];
        }

        cout << endl;
    }
}