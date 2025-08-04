#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
#define int long long

using namespace std;

int32_t main(){fastio
    int t; cin >> t;
    while(t--){
        int n, value, biggest_value, biggest_freq = 0; cin >> n;
        int a[n];
        map<int, int> freq;
        
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int pointer = 1;

        for(int i = 0; i < n; i++){
            if(freq[a[i]] == 0){
                cout << a[i] << ' ';
                freq[a[i]]++;
            }
            else{
                while(freq[pointer] != 0 && pointer <= n) pointer++;
                cout << pointer << " ";
                freq[pointer]++;
            }
        }

        cout << endl;
    }
}