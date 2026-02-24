#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int t; cin >> t;

    while(t--){
        string s; cin >> s;
        stack<int> upper, lower;
        for(int i = 0, size = s.length(); i < size; i++){
            if(s[i] == 'B'){
                if(!upper.empty()){
                    int index = upper.top();
                    upper.pop();
                    s[index] = ' ';
                }
                s[i] = ' ';
            }
            else if(s[i] == 'b'){
                if(!lower.empty()){
                    int index = lower.top();
                    lower.pop();
                    s[index] = ' ';
                }
                s[i] = ' ';
            }
            else{
                if(islower(s[i])){
                    lower.push(i);
                }
                else{
                    upper.push(i);
                }
            }
        }

        for(auto c : s){
            if(c != ' '){
                cout << c;
            }
        }
        cout << endl;
    }

    return 0;
}