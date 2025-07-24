#include <bits/stdc++.h>


using namespace std;

int main(){
    string s, answer = ""; cin >> s;
    bool haszero = 0;

    for(auto c : s){
        if(c == '0' && !haszero){
            haszero = true;
            continue;
        }
        answer += c;
    }
    if(!haszero){
        for(int i = 1, size = s.length(); i < size; i++){
            cout << s[i];
        }
    }
    else cout << answer;
}