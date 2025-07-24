#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define F first
#define S second
#define endl '\n'
#define ll long long

using namespace std;

int main(){ fastio
    int n, a, b; cin >> n >> a >> b;

    double soma = 0, primeiro, array[n - 1];

    cin >> primeiro; soma += primeiro;

    for(int i = 0; i < n - 1; i++){
        cin >> array[i];
        soma += array[i];
    }

    sort(array, array + n - 1);

    for(int i = 0; i < n; i++){
        if(a * primeiro / soma >= b){
            cout << i;
            return 0;
        }
        else soma -= array[n - i - 2];
    }

}