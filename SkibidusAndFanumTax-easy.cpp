#include <bits/stdc++.h>

using namespace std;

void printararray(int array[], int size){
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << "\n";
}

int main(){
    int tests; cin >> tests;
    while(tests--){
        int x, y; cin >> x >> y;
        int a[x], b[y];
        string result = "YES\n";
        for(int i = 0; i < x; i++){
            cin >> a[i];
        }
        for(int i = 0; i < y; i++){
            cin >> b[i];
        }
        for(int i = 0; i < x; i++){
            int current = a[i];
            int transformed = b[0] - a[i];

            a[i] = min(current, transformed);

            if(i == 0){
                continue;
            }

            if(a[i] < a[i - 1]){
                a[i] = max(current, transformed);
            }
            if(a[i] < a[i - 1]){
                result = "NO\n";
            }
        }
        cout << result;
    }
    return 0;
}