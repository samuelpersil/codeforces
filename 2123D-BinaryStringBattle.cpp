#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
#define F first
#define S second

using namespace std;

int main(){fastio
    int t, n, k, onescount;
    string s;
    cin >> t;

    while(t--){
        onescount = 0;

        cin >> n >> k;
        cin >> s;

        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                onescount++;
            }
        }

        if(k*2 > n || k >= onescount){
            cout << "Alice";
        }
        else{
            cout << "Bob";
        }
        cout << endl;
    }


    return 0;
}