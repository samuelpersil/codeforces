#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'
#define oo 1000000000
#define MAXN 60001

using namespace std;

int n;
double coord[MAXN], vel[MAXN]; 

double timeh(double mid){
    double biggest = 0;
    for(int i = 0; i < n; i++){
        biggest = max(biggest, abs(mid - coord[i])/vel[i]);
    }

    return biggest;
}

int main(){fastio
    
    cin >> n;

    double far = 0;

    for(int i = 0; i < n; i++){
        cin >> coord[i];
        far = max(far, coord[i]);
    }

    for(int i = 0; i < n; i++){
        cin >> vel[i];
    }

    double l = 0, r = far;

    while(r - l > 5e-7){
        double mid = (r + l) / 2;
        if(timeh(mid - 1e-7) < timeh(mid + 1e-7)){
            r = mid;
        }
        else{
            l = mid;
        }
    }

    cout << fixed << setprecision(6) << timeh(l) << endl;

}