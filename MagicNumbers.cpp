#include <bits/stdc++.h>

using namespace std;

int main(){
    string n; cin >> n;
    for(int i = 0, size = n.length(); i < size; i++){
        if(n[i] == '1'){
            if(i < size - 2 && n[i + 1] =='4' && n[i + 2] == '4') i += 2;
            else if(i < size - 1 && n[i + 1] == '4') i++;
        }
        else{
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
    return 0;
}