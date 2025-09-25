#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        int answer = 0, negatives = 0;

        while(n--){
            int value; cin >> value;

            if(value == -1){
                negatives++;
            }
            else if(value == 0) answer++;
        }

        if(negatives % 2 == 1) answer += 2;

        cout << answer << endl;
    }


    return 0;
}