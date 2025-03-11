#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int count = n, last = 0;
    vector<int> kids(n);
    for(int i = 0; i < n; i++){
        cin >> kids[i];
    }
    while(count){
        for(int i = 0; i < n; i++){
            kids[i] -= m;

            if(kids[i] <= 0 && kids[i] + m > 0){
                count--;
                last = i + 1;
            }
        }
    }
    cout << last;

}