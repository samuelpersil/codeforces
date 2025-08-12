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
        int n; cin >> n;
        int array[n], score = 0;

        bool haszero = false;

        for(int i = 0; i < n; i++){
            cin >> array[i];
        }

        for(int i = 0; i < n; i++){
            if(array[i] == 0) score++;
            else score += array[i];
        }

        cout << score << endl;
    }

}