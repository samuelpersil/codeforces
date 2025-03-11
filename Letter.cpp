#include <bits/stdc++.h>

using namespace std;

int main(){
    map<char, int> h1freq;
    map<char, int> textfreq;
    string h1, text;

    getline(cin, h1);
    getline(cin, text);

    for(auto letter : h1){
        if(letter != ' ') h1freq[letter]++;
    }
    for(auto letter : text){
        if(letter != ' '){
            if(h1freq[letter] <= 0){
                cout << "NO";
                return 0;
            }
            h1freq[letter]--;
        }
    }
    cout << "YES";
    return 0;
    
}