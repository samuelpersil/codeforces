#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int heights[n], big, small;
    for(int i = 0; i < n; i++){
        cin >> heights[i];
        if(i == 0){
            big = i;
            small = i;
        }
        else{
            if(heights[i] <= heights[small]) small = i;
            else if(heights[i] > heights[big]) big = i;
        }
    }
    cout << big + (n - small - 1) + (big > small ? -1 : 0) << endl;
}