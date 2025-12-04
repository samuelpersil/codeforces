#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        
        int arr[n], diff = -1;

        for(int i = 0; i < n; i++){
            cin >> arr[i];
            
            if(arr[i] != arr[0]) diff = i;
        }

        if(diff != -1){
            cout << "YES" << endl;
            for(int i = 1; i < n; i++){
                if(arr[i] != arr[0]){
                    cout << 1 << " " << i + 1 << endl;
                }
                else{
                    cout << i + 1 << " " << diff + 1 << endl;
                }
            }
        }
        else{
            cout << "NO" << endl;
        }
    }


    return 0;
}