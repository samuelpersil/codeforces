#include <bits/stdc++.h>

using namespace std;

int main(){
    string n1; cin >> n1;
    string n2; cin >> n2;

    for(int i = 0, size = n1.length() ; i < size; i++){
        if(n1[i] + n2[i] == 48 + 49){
            cout << 1;
        }
        else{
            cout << 0;
        }
    }
}