#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'

using namespace std;

int main(){ fastio
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int array[n], answer = 0, to_complete = k, have_to_break = 0;

        for(int i = 0; i < n; i++){
            cin >> array[i];
        }

        for(int i = 0; i < n; i++){
            if(!have_to_break && array[i] == 0) to_complete--;
            else if(!have_to_break && array[i] == 1){
                to_complete = k;
            }
            if(to_complete == 0){
                have_to_break = 1;
                answer++;
                to_complete = k;
            }
            else if(have_to_break){
                have_to_break = 0;
            }
        }

        cout << answer << endl;
    }
}