#include <bits/stdc++.h>
#define LL_LIMIT 1000000

using namespace std;

int main(){
    int t; cin >> t;
    long long number, root;

    vector<bool> isprime(LL_LIMIT, true);
    isprime[0] = false; isprime[1] = false;
    for(int i = 2; i < LL_LIMIT; i++){
        if(isprime[i]){
            for(int start = 2 * i; start < LL_LIMIT; start += i){
                isprime[start] = false;
            }
        }
    }

    
    while(t--){
        cin >> number;
        root = sqrtl(number);

        if(root * root == number && root < LL_LIMIT && isprime[root]){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }        
    }

    return 0;
}