#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> fibonumbers = {0, 1};
    if(n == 0){
        cout << "0 0 0";
        return 0;
    }
    if(n == 1){
        cout << "0 0 1";
        return 0;
    }
    if(n == 2){
        cout << "0 1 1";
        return 0;
    }
    while(fibonumbers.back() != n){
        fibonumbers.push_back(*(fibonumbers.end() - 1) + *(fibonumbers.end() - 2));
    }
    cout << *(fibonumbers.end() - 5) << " " << *(fibonumbers.end() - 4) << " " << *(fibonumbers.end() - 2);
    return 0;
}