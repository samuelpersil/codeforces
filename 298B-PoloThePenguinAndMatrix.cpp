#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int n, m, d; cin >> n >> m >> d;
    int matrix[n * m], value;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matrix[i * m + j];
        }
    }

    sort(matrix, matrix + n * m);

    int median = matrix[(n*m)/2], answer = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(abs(matrix[i * m + j] - median) % d == 0){
                answer += abs(matrix[i * m + j] - median) / d;
            }
            else{
                cout << -1 << endl;
                return 0;
            }
        }
    }

    cout << answer << endl;   


    return 0;
}