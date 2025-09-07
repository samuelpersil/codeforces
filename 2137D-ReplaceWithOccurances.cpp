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

        int array[n], answer[n], last_number_used = 1;

        ll total = 0, possible = 1;

        map<int, int> freq;
        map<int, queue<int>> to_print;


        for(int i = 0; i < n; i++){
            cin >> array[i];
            freq[array[i]]++;
        }

        for(auto itr : freq){
            if(itr.S % itr.F != 0){
                possible = 0;
                break;
            }
            total += itr.S;
            for(int i = 0; i < itr.S / itr.F; i++){
                for(int j = 0; j < itr.F; j++){
                    to_print[itr.F].push(last_number_used);
                }
                last_number_used++;
            }
        }

        if(total != n) possible = 0;

        if(!possible){
            cout << -1 << endl;
            continue;
        }

        for(int i = 0; i < n; i++){
            cout << to_print[array[i]].front() << " ";
            to_print[array[i]].pop();
        }

        cout << endl;
    }    
}