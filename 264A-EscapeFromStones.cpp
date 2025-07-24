#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int main(){
    string s; cin >> s;
    ll size = s.length();
    ll l_free = 0, r_free = size - 1, answer[size];

    for(ll i = 0; i < size; i++){
        if(s[i] == 'l'){
            answer[r_free] = i + 1;
            r_free--;
        }
        else{
            answer[l_free] = i + 1;
            l_free++;
        }
    }

    for(auto a : answer){
        cout << a << endl;
    }
}