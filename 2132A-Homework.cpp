#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
#define ll long long
#define F first
#define S second

using namespace std;

int main(){fastio
    int t; cin >> t;

    while(t--){
        int n, m;
        char value;
        deque<char> a;
        string b, c;

        cin >> n;

        for(int i = 0; i < n; i++){
            cin >> value;
            a.push_back(value);
        }

        cin >> m >> b >> c;

        for(int i = 0; i < m; i++){
            if(c[i] == 'D'){
                a.push_back(b[i]);
            }
            else{
                a.push_front(b[i]);
            }
        }

        for(auto charac : a){
            cout << charac;
        }
        cout << endl;
    }

}