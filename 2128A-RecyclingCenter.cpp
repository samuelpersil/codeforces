#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
#define ll long long

using namespace std;

int main(){fastio
    int t; cin >> t;
    while(t--){
        int n;
        ll c;
        cin >> n >> c;

        ll array[n], multiplier = 1, answer = 0;

        for(int i = 0; i < n; i++){
            cin >> array[i];
        }

        sort(array, array + n, greater<int>());

        for(int i = 0; i < n; i++){
            if(array[i] * multiplier > c){
                answer++;
            }
            else{
                multiplier *= 2;
            }
        }

        cout << answer << endl;
    }
}