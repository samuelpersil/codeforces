#include <bits/stdc++.h>

using std::vector;

int main(){
    int n, k, l, c, d, p, nl, np;
    std::cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    vector<int> toasts;
    toasts.push_back(k * l / nl);
    toasts.push_back(c * d);
    toasts.push_back(p / np);
    sort(toasts.begin(), toasts.end());
    std::cout << toasts[0] / n;
}