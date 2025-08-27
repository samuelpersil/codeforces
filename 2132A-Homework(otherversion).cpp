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
        string a, b, c;

        cin >> n >> a >> m >> b >> c;

        for(int i = 0; i < m; i++){
            if(c[i] == 'D'){
                a = a + b[i];
            }
            else{
                a = b[i] + a;
            }
        }

        cout << a << endl;
    }

}