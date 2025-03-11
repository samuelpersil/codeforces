#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> numbers(n);
    long long int moves = 0;
    for(int i = 0; i < n; i++){
        cin >> numbers[i];
    }

    sort(numbers.begin(), numbers.end());

    for(int i = 0; i < n; i++){
        moves += abs(numbers[i] - i - 1);
    }
    cout << moves << endl;
}