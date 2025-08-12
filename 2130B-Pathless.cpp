#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
#define ll long long
#define F first
#define S second

using namespace std;

int main(){ fastio
    int t; cin >> t;

    while(t--){
        int n, s; cin >> n >> s;
        int array[n], sum = 0, freq[3] = {0};

        for(int i = 0; i < n; i++){
            cin >> array[i];
            sum += array[i];
            freq[array[i]]++;
        }

        if(s < sum){
            for(auto c : array){
                cout << c << " ";
            }
            cout << endl;
            continue;
        }

        if(s == sum || (s > sum && s-sum != 1)){
            cout << -1 << endl;
            continue;
        }

        else{
            while(freq[0]){
                cout << "0 ";
                freq[0]--;
            }
            while(freq[2]){
                cout << "2 ";
                freq[2]--;
            }
            while(freq[1]){
                cout << "1 ";
                freq[1]--;
            }
            cout << endl;
        }        
    }
}