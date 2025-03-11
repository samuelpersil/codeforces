#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n; cin >> n;
    int exit, enter, passengers = 0, capacity = 0;
    for(int i = 0; i < n; i++){
        cin >> exit >> enter;
        passengers += enter;
        passengers -= exit;
        capacity = max(capacity, passengers);
    }
    cout << capacity << endl;
    return 0;
}