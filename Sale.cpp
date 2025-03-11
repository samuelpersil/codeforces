#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int sum = 0;
    vector<int> prices(n);
    for(int i = 0; i < n; i++){
        cin >> prices[i];
    }
    sort(prices.begin(), prices.end());

    for(int i = 0; i < m; i++){
        if(-1 * prices[i] > 0){
            sum += -1 * prices[i];
        }

    }
    cout << sum << endl;
}