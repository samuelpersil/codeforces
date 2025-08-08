#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){ fastio
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        char array[n][n];

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> array[i][j];
            }
        }

        int answer = 0;

        for(int i = 0; i < n - n/2; i++){
            for(int j = 0; j < n/2; j++){
                int sum = array[i][j] + array[j][n - 1 - i] + array[n - 1 - i][n - 1 - j] + array[n - 1 - j][i] - 4 * '0';
                answer+= min(sum, 4 - sum);
            }
        }

        cout << answer << endl;
    }
}