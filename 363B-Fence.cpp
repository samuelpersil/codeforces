#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;

int main(){ fastio
    int n, k, value, sum = 0, minimal, min_index; cin >> n >> k;
    vector<int> heights;
    for(int i = 0; i < n; i++){
        cin >> value;
        heights.push_back(value);
    }

    for(int i = 0; i < n; i++){
        if(i == 0){
            for(int j = 0; j < k; j++){
                sum += heights[j];
            }
            minimal = sum;
            i += k - 1;
            min_index = 1;
        }
        else{
            sum += heights[i];
            sum -= heights[i - k];

            if(sum < minimal){
                min_index = i - k + 2;
                minimal = sum;
            }
        }
    }

    cout << min_index;
}