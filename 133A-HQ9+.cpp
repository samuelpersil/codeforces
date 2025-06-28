#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr);

using namespace std;

int main(){ fastio
    string s; cin >> s;
    for(auto c : s){
        if(c == 'H' || c == 'Q' || c == '9'){
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}