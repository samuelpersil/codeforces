#include <bits/stdc++.h>

using namespace std;

int main(){
    string word; cin >> word;
    int uppercases = 0;
    int size = word.length();

    for(int i = 0; i < size; i++){
        if(word[i] >= 65 && word[i] <= 90){
            uppercases++;
        }
    }
    if(uppercases > size - uppercases){
        for(int i = 0; i < size; i++){
            cout << (char) toupper(word[i]);
        }
        return 0;
    }
    for(int i = 0; i < size; i++){
        cout << (char) tolower(word[i]);
    }

    return 0;
}