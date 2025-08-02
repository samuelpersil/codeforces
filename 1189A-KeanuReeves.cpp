#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
#define ll long long

using namespace std;

int main(){fastio
    int size, ones = 0; cin >> size;    
    string s; cin >> s;

    for(char c : s){
        if(c == '1') ones++;
    }

    if(ones * 2 == size){
        cout << 2 << endl;
        cout << s[0] << " ";
        for(int i = 1; i < size; i++){
            cout << s[i];
        }
    }

    else{
        cout << 1 << endl;
        cout << s;
    }
}