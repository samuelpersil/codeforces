#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int n; cin >> n;
    int positives = 0, negatives = 0, minimum = (n % 2 == 0 ? n / 2 : n / 2 + 1);
    for(int i = 0; i < n; i++){
        int val; cin >> val;
        if(val > 0) positives++;
        else if(val < 0) negatives++;
    }

    if(positives >= minimum){
        cout << 1 << endl;
    }
    else if(negatives >= minimum){
        cout << -1 << endl;
    }
    else cout << 0 << endl;

    return 0;
}