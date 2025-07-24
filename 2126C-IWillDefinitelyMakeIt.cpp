#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
#define F first
#define S second

using namespace std;

int main(){ fastio
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int array[n], answer = 0, maximum = 0, water_level = 0, now;
        priority_queue<int> q;
        int lowest;

        for(int i = 0; i < n; i++){
            cin >> array[i];
            maximum = max(maximum, array[i]);
            q.push(-array[i]);
        }

        now = array[k - 1];

        while(!q.empty()){
            lowest = q.top(); q.pop();
            //cout << "NOW: " << now << " LOWEST: " << lowest << " WATER: " << water_level << endl;
            if(water_level + (-lowest - now) > now){
                break;
            }
            water_level += -lowest - now;
            now = -lowest;

            if(now == maximum){
                answer = 1;
                break;
            }
        }

        cout << (answer ? "Yes" : "No") << endl;
    }
}