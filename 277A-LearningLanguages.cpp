#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
#define ll long long

using namespace std;

int comps;

struct DSU {
    int n;
    vector<int> parent, size;

    DSU(int n): n(n) {
        parent.resize(n, 0);
        size.assign(n, 1);

        for(int i=0;i<n;i++)
            parent[i] = i;
    }

    int find(int a) {
        if(a == parent[a]) return a;
        return parent[a] = find(parent[a]);
    }

    void join(int a, int b) {
        a = find(a); b = find(b);
        if(a != b) {
            if(size[a] < size[b]) swap(a, b);
            parent[b] = a;
            size[a] += size[b];
            comps--;
        }
    }
};

int main(){fastio
    int n, m; cin >> n >> m;

    DSU dsu(n);
    comps = n;

    bool any_lang_spoken = false;

    vector<int> langs[m + 1];

    for(int i = 0; i < n; i++){
        int k; cin >> k;
        while(k--){
            int lang; cin >> lang;
            langs[lang].push_back(i);
            any_lang_spoken = true;
        }
    }

    for(auto lang : langs){
        if(lang.size() >= 2){
            for(int i = 1; i < lang.size(); i++){
                dsu.join(lang[0], lang[i]);
            }
        }
    }

    cout << (any_lang_spoken ? comps - 1 : n) << endl;

    return 0;
}