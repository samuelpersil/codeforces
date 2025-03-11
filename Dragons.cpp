#include <bits/stdc++.h>
#define F first
#define S second

using namespace std;

int main(){
    int strength, n; cin >> strength >> n;
    pair<int, int> dragons[n];
    for(int i = 0; i < n; i++){
        cin >> dragons[i].F >> dragons[i].S;
    }
    sort(dragons, dragons + n);

    for(auto dragon : dragons){
        cout << dragon.F << " " << dragon.S << endl;
    }
}