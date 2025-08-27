#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
#define ll long long

using namespace std;

int main(){fastio
    int n, index; cin >> n;
    string s, answer; cin >> s;

    answer = s;

    for(int i = 0; i < n; i++){
        index = (i % 2 == 0 ? n - i/2 - 1 : i/2);

        answer[index] = s[n - i - 1];
    }

    cout << answer;
    
    
    /* Enconding
    int n, index; cin >> n;
    string s, answer = ""; cin >> s;

    while(s.length() > 0){
        if(s.length() % 2 == 1) index = s.length() / 2;
        else index = s.length()/2 - 1;

        answer += s[index];
        s.erase(index, 1);
    }

    cout << answer;

    */
}