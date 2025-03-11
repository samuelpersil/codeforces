#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int changes = 0;
    string colors; cin >> colors;
    for(int i = 0; i < n - 1; i++){
        if(colors[i] == colors[i+1]){
            changes++;
        }
    }
    cout << changes << endl;
    return 0;
}