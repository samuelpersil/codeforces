#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, person; cin >> n;
    map<int, int> received;
    for(int i = 0; i < n; i++){
        cin >> person;
        received[person] = i + 1;
    }
    for(int i = 0; i < n; i++){
        cout << received[i + 1] << " ";
    }
    
}