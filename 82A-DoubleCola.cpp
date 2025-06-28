#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n;
    const string names[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    cin >> n;
    while(n > 5){
        n = (n - (5 - 1))/2;
    }
    cout << names[n-1];

    return 0;
}