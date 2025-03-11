#include <bits/stdc++.h>

using namespace std;

int main(){
    string original, input_reverse;
    cin >> original;
    string correct_reverse = original;
    for(int i = 0, size = original.length(); i < size; i++){
        correct_reverse[size - i - 1] = original[i];
    }
    cin >> input_reverse;
    cout << (correct_reverse == input_reverse ? "YES" : "NO");
    return 0;
}