#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t; cin >> t;
    string caso;
    while(t--){
        cin >> caso;
        if(caso[0] == '1' && caso[1] == '0' && (caso[2] - '0' >= 2 || (caso[2] - '0' == 1 && caso.length() >= 4) )  ){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}