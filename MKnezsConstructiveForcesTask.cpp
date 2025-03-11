#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int test;
    while(n--){
        cin >> test;
        if(test == 3){
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        if(test % 2 == 0){
            for(int i = 0; i < test; i++){
                if(i % 2 == 0) cout << "1 ";
                else cout << "-1 ";
            }
        }
        else{
            for(int i = 0; i < test; i++){
                if(i % 2 == 0) cout << (test - 3)/2 << " ";
                else cout << ((test - 3)/2 + 1) * -1 << " ";
            }
        }
        cout << "\n";
    }
}