#include <bits/stdc++.h>

using namespace std;

void permutations(int n, int size, string current){
    if(current != "" && n % stoi(current) == 0){
        cout << "YES";
        exit(0);
    }
    
    if(current.length() == size){
        return;
    }

    permutations(n, size, current + '4');
    permutations(n, size, current + '7');
}

int main(){
    int n; cin >> n;
    int size = to_string(n).length();

    permutations(n, size, "");
    cout << "NO";

}