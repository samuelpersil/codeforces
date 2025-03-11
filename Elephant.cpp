#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n, answer = 0; cin >> n;
    while(n > 0){
        n -= 5;
        answer++;
    }
    cout << answer << endl;
}