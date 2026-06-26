#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

void change(int k, int x, int n, ll tree[]) {
    int count = 0;
    k += n;
    tree[k] = x;
    for (k /= 2; k >= 1; k /= 2){
        tree[k] = (count == 0 ? (tree[2 * k] | tree[2 * k + 1]) : (tree[2 * k] ^ tree[2 * k + 1]));
        count = 1 - count;
    }
}

int main(){fastio
    int n, q; cin >> n >> q;

    n = (1 << n);

    ll arr[n], tree[2 * n];

    tree[0] = 0;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        tree[n + i] = arr[i];
    }

    int count = 0;
    for(int i = n - 1; i > 0; i /= 2){
        for(int j = i; j > i / 2; j--){
            tree[j] = (count == 0 ? (tree[2 * j] | tree[2 * j + 1]) : (tree[2 * j] ^ tree[2 * j + 1]));
        }
        count = 1 - count;
    }

    while(q--){
        int a, b; cin >> a >> b;
        change(--a, b, n, tree);
        cout << tree[1] << endl;
    }

    return 0;
}