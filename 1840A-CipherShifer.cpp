#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int t; cin >> t;

    while(t--){
        int size; cin >> size;
        string s; cin >> s;

        char last = 'A';
        string ans = "";
        for(int i = 0; i < size; i++){
            if(last == 'A'){
                last = s[i];
                ans.push_back(s[i]);
            }
            else if(s[i] == last){
                last = 'A';
            }
        }

        cout << ans << endl;
    }

    return 0;
}