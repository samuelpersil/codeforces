#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
#define F first
#define S second

using namespace std;

int main(){fastio
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        int array[n];
        for(int i = 0; i < n; i++){
            cin >> array[i];
        }

        int minims[n], maxes[n];
        minims[0] = array[0];
        for(int i = 1; i < n; i++){
            minims[i] = min(minims[i-1], array[i]);
        }

        maxes[n - 1] = array[n - 1];
        for(int i = n-2; i >= 0; i--){
            maxes[i] = max(maxes[i+1], array[i]);
        }

        for(int i = 0; i < n; i++){
            if((maxes[i] >= array[i] && array[i] == minims[i])){
                cout << '1';
            }
            else if(array[i] == maxes[i] && array[i] >= minims[i]){
                cout << "1";
            }
            else{
                cout << '0';
            }
        }
        cout << endl;
    }


    return 0;
}