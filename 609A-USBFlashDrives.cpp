#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'

using namespace std;

int main(){ fastio
    int n, m; cin >> n >> m;

    int array[n];

    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    sort(array, array + n, greater<int>());

    for(int i = 0; i < n; i++){
        m -= array[i];
        if(m <= 0){
            cout << i + 1;
            return 0;
        }
    }

    
}