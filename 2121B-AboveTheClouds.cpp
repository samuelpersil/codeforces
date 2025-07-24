#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'

using namespace std;

int main(){ fastio
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        string s, answer = "No"; cin >> s;
        int size = s.length();

        map<char, int> processed;
        processed[s[0]] = 1, processed[s[size-1]] = 1;

        for(int i = 1; i < size - 1; i++){
            if(processed[s[i]] == 1){
                answer = "Yes";
                break;
            }
            
            processed[s[i]] = 1;
        }

        cout << answer << endl;
    }
}