#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

vector<int> sieve(1000000, 0), primes;

int main(){fastio
    for(int i = 2; i < sieve.size(); i++){
        if(sieve[i]) continue;
        primes.push_back(i);
        
        for(int j = i + i; j < sieve.size(); j += i){
            sieve[j] = 1;
        }
    }

    int n, m; cin >> n >> m;

    int matrix[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }

    vector<int> cost_line(n, 0), cost_column(m, 0);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int cost = *lower_bound(primes.begin(), primes.end(), matrix[i][j]) - matrix[i][j];
            cost_line[i] += cost;
            cost_column[j] += cost;
        }
    }

    cout << min(*min_element(cost_line.begin(), cost_line.end()), *min_element(cost_column.begin(), cost_column.end())) << endl;

    return 0;
}