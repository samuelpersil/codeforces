#include <bits/stdc++.h>

using namespace std;

int main(){
    string sum;
    vector<int> numbers;
    getline(cin, sum);
    for(int i = 0, size = sum.length(); i < size; i += 2){
        numbers.push_back(sum[i]);
    }

    sort(numbers.begin(), numbers.end());
    for(int i = 0, size = numbers.size(); i < size; i++){
        cout << (char) numbers[i];
        if(i != size - 1){
            cout << "+";
        }
    }
}